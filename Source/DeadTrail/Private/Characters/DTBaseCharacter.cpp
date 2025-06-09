#include "Characters/DTBaseCharacter.h"
#include "Components/StatlineComponent.h"

ADTBaseCharacter::ADTBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	Statline = CreateDefaultSubobject<UStatlineComponent>(TEXT("Statline"));
	Statline->SetMovementComponentRef(GetCharacterMovement());

	SaveActorID = FGuid::NewGuid();
}

void ADTBaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (SaveActorID.IsValid())
	{
		SaveActorID = FGuid::NewGuid();
	}
}

// === Movement & Action Interfaces ===

bool ADTBaseCharacter::CanJump() const
{
	return Statline->CanJump();
}

void ADTBaseCharacter::HasJumped()
{
	Statline->HasJumped();
	ACharacter::Jump();
}

bool ADTBaseCharacter::CanSprint() const
{
	return Statline->CanSprint();
}

void ADTBaseCharacter::SetSprinting(const bool& IsSprinting)
{
	Statline->SetSprinting(IsSprinting);
}

void ADTBaseCharacter::SetWalking(const bool& IsWalking)
{
	Statline->SetWalking(IsWalking);
}

void ADTBaseCharacter::SetSneaking(const bool& IsSneaking)
{
	Statline->SetSneaking(IsSneaking);
}

// === Tick & Input ===

void ADTBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADTBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

// === Save System ===

FGuid ADTBaseCharacter::GetActorSaveID_Implementation()
{
	return SaveActorID;
}

FSaveDTActorData ADTBaseCharacter::GetSaveData_Implementation()
{
	FSaveDTActorData Ret;

	Ret.ActorClass = this->GetClass();
	Ret.ActorTransform = this->GetTransform();
	Ret.WasSpawned = this->WasSpawned;

	return Ret;
}

void ADTBaseCharacter::SetActorGUID_Implementation(const FGuid& NewGUID)
{
	if (SaveActorID.IsValid())
	{
		SaveActorID.Invalidate();
	}

	SaveActorID = NewGUID;
}
