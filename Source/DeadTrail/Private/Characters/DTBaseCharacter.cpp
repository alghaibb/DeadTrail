#include "Characters/DTBaseCharacter.h"
#include "Components/StatlineComponent.h"

ADTBaseCharacter::ADTBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	Statline = CreateDefaultSubobject<UStatlineComponent>(TEXT("Statline"));

}

void ADTBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (Statline)
	{
		Statline->SetMovementComponentRef(GetCharacterMovement());
	}
}

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
	if (Statline)
	{
		Statline->SetWalking(IsWalking);
	}
}


void ADTBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADTBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

