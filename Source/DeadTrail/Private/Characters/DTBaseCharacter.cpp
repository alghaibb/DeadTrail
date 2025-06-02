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
	
}

void ADTBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADTBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

