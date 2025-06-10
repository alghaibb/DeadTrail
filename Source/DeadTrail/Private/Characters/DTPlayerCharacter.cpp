#include "Characters/DTPlayerCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Components/SphereComponent.h"
#include "Interface/DTInteractionInterface.h"
#include "Logger.h"

ADTPlayerCharacter::ADTPlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bTickEvenWhenPaused = false;

	// === Capsule & Rotation ===
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// === Movement Config ===
	UCharacterMovementComponent* Movement = GetCharacterMovement();
	Movement->bOrientRotationToMovement = true;
	Movement->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	Movement->JumpZVelocity = 550.f;
	Movement->AirControl = 0.2f;
	Movement->MaxWalkSpeed = 335.f;
	Movement->MinAnalogWalkSpeed = 20.f;
	Movement->BrakingDecelerationWalking = 2000.f;
	Movement->BrakingDecelerationFalling = 2500.0f;
	Movement->GravityScale = 1.2f;

	// === Camera Setup ===
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// === Interaction Trigger Component ===
	InteractionTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionTriggerVolume"));
	InteractionTrigger->SetupAttachment(RootComponent);
	InteractionTrigger->SetRelativeScale3D(FVector(10));
	InteractionTrigger->OnComponentBeginOverlap.AddDynamic(this, &ADTPlayerCharacter::OnInteractionTriggerOverlapBegin);
	InteractionTrigger->OnComponentEndOverlap.AddDynamic(this, &ADTPlayerCharacter::OnInteractionTriggerOverlapEnd);
}

void ADTPlayerCharacter::Tick(float DeltaTime)
{
	if (bEnableRayTrace)
	{
		TraceForInteraction();
	}
}

// === Overlap Begin: Called when another actor enters the interaction sphere ===
void ADTPlayerCharacter::OnInteractionTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->Implements<UDTInteractionInterface>())
	{
		return;
	}
	InteractableActors.Add(OtherActor);
	bEnableRayTrace = true;
}

// === Overlap End: Called when another actor exits the interaction sphere ===
void ADTPlayerCharacter::OnInteractionTriggerOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
	if (OtherActor->Implements<UDTInteractionInterface>())
	{
		return;
	}
	InteractableActors.Remove(OtherActor);
	bEnableRayTrace = InteractableActors.Num() > 0;
}

// === Update Interaction Text: Called to update the interaction text based on the current interaction actor ===
void ADTPlayerCharacter::UpdateInteractionText_Implementation()
{
	UpdateInteractionText();
}


// === Input Functions ===

void ADTPlayerCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Forward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector Right = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(Forward, MovementVector.Y);
		AddMovementInput(Right, MovementVector.X);
	}
}

void ADTPlayerCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxis = Value.Get<FVector2D>();

	if (Controller)
	{
		AddControllerYawInput(LookAxis.X);
		AddControllerPitchInput(LookAxis.Y);
	}
}

void ADTPlayerCharacter::PlayerJump()
{
	if (ADTBaseCharacter::CanJump())
	{
		ADTBaseCharacter::HasJumped();
	}
}

// === Sprint, Walk, Sneak ===

void ADTPlayerCharacter::StartSprinting()
{
	SetSprinting(true);
}

void ADTPlayerCharacter::StopSprinting()
{
	SetSprinting(false);
}

void ADTPlayerCharacter::ToggleWalk()
{
	bIsWalking = !bIsWalking;
	SetWalking(bIsWalking);
}

void ADTPlayerCharacter::StopWalking()
{
	SetWalking(false);
}

void ADTPlayerCharacter::ToggleSneak()
{
	bIsSneaking = !bIsSneaking;
	SetSneaking(bIsSneaking);
}

// === Interact ===
void ADTPlayerCharacter::OnInteract()
{
	if (InteractionActor == nullptr)
	{
		return;
	}
	IDTInteractionInterface* Inter = Cast<IDTInteractionInterface>(InteractionActor);
	if (Inter == nullptr)
	{
		Logger::GetInstance()->AddMessage("ADTPlayerCharacter::OnInteract - Failed to cast to InteractionInterface:", ERRORLEVEL::EL_ERROR);
		return;
	}
	//Inter->Interact_Implementation(this);
	Inter->Execute_Interact(InteractionActor, this);
}

// === Interaction Trace ===

void ADTPlayerCharacter::TraceForInteraction()
{
	FCollisionQueryParams LTParams = FCollisionQueryParams(FName(TEXT("InteractionTrace")), true, this);
	LTParams.bReturnPhysicalMaterial = false;
	LTParams.bReturnFaceIndex = false;

	GetWorld()->DebugDrawTraceTag = DebugShowInteractionTrace ? TEXT("InteractionTrace") : TEXT("");
	
	FHitResult LTHit(ForceInit);
	FVector LTStart = FollowCamera->GetComponentLocation();
	float SearchLength = (FollowCamera->GetComponentLocation() - CameraBoom->GetComponentLocation()).Length();
	SearchLength += InteractionTraceLength;
	FVector LTEnd = (FollowCamera->GetForwardVector() * SearchLength) + LTStart;

	GetWorld()->LineTraceSingleByChannel(LTHit, LTStart, LTEnd, ECC_Visibility, LTParams);
	
	UpdateInteractionText_Implementation();
	if (!LTHit.bBlockingHit || !LTHit.GetActor()->Implements<UDTInteractionInterface>())
	{
		InteractionActor = nullptr;
		return;
	}
	InteractionActor = LTHit.GetActor();

}

// === Input & Mapping Context ===

void ADTPlayerCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ADTPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* Enhanced = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Enhanced->BindAction(JumpAction, ETriggerEvent::Started, this, &ADTPlayerCharacter::PlayerJump);
		Enhanced->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
		Enhanced->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ADTPlayerCharacter::Move);
		Enhanced->BindAction(LookAction, ETriggerEvent::Triggered, this, &ADTPlayerCharacter::Look);
		Enhanced->BindAction(SprintAction, ETriggerEvent::Started, this, &ADTPlayerCharacter::StartSprinting);
		Enhanced->BindAction(SprintAction, ETriggerEvent::Completed, this, &ADTPlayerCharacter::StopSprinting);
		Enhanced->BindAction(WalkAction, ETriggerEvent::Triggered, this, &ADTPlayerCharacter::ToggleWalk);
		Enhanced->BindAction(SneakAction, ETriggerEvent::Started, this, &ADTPlayerCharacter::ToggleSneak);
		Enhanced->BindAction(InteractAction, ETriggerEvent::Completed, this, &ADTPlayerCharacter::OnInteract);
	}
}

// === Lifecycle ===

void ADTPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	SaveActorID.Invalidate();
}
