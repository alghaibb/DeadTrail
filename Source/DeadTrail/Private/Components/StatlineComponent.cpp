#include "Components/StatlineComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

void UStatlineComponent::TickStats(const float& Deltatime)
{
	Health.TickStat(Deltatime);
	TickStamina(Deltatime);
	Hunger.TickStat(Deltatime);
	Thirst.TickStat(Deltatime);
}

void UStatlineComponent::TickStamina(const float& DeltaTime)
{
	if (bIsSprinting && IsValidSprinting())
	{
		Stamina.TickStat(0 - (DeltaTime * SprintCost));
		
		if (Stamina.GetCurrent() <= 0.0f)
		{
			SetSprinting(false);
		}
		
		return;
	}

	Stamina.TickStat(DeltaTime);
}

bool UStatlineComponent::IsValidSprinting()
{
	if (!MovementComponent)
		return false;

	return MovementComponent->Velocity.Length() > JogSpeed && !MovementComponent->IsFalling();
}


UStatlineComponent::UStatlineComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UStatlineComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UStatlineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (TickType != ELevelTick::LEVELTICK_PauseTick)
	{
		TickStats(DeltaTime);
	}
}

void UStatlineComponent::SetMovementComponentRef(UCharacterMovementComponent* Comp)
{
	MovementComponent = Comp;
}

float UStatlineComponent::GetStatPercentile(const EStatlineType Stat) const
{
	switch (Stat)
	{
	case EStatlineType::HEALTH:
		return Health.Percentile();
	case EStatlineType::STAMINA:
		return Stamina.Percentile();
	case EStatlineType::HUNGER:
		return Hunger.Percentile();
	case EStatlineType::THIRST:
		return Thirst.Percentile();
	default:
		// TODO: Log an error or handle the case where the stat type is invalid
		break;
	}
	return -1;
}

bool UStatlineComponent::CanSprint() const
{
	return Stamina.GetCurrent() > 0.0;
}

void UStatlineComponent::SetSprinting(const bool& IsSprinting)
{
	if (bIsWalking || !MovementComponent)
		return;

	bIsSprinting = IsSprinting;
	MovementComponent->MaxWalkSpeed = IsSprinting ? SprintSpeed : JogSpeed;
}

void UStatlineComponent::SetWalking(const bool& IsWalking)
{
	if (!MovementComponent)
		return;

	bIsWalking = IsWalking;

	// Stop sprinting if walking is enabled
	if (bIsWalking)
	{
		bIsSprinting = false;
		MovementComponent->MaxWalkSpeed = WalkSpeed;
	}
	else
	{
		MovementComponent->MaxWalkSpeed = JogSpeed;
	}
}

bool UStatlineComponent::CanJump() const
{
	if (!MovementComponent) return false;

	return MovementComponent->IsMovingOnGround() && Stamina.GetCurrent() >= JumpCost;
}


void UStatlineComponent::HasJumped()
{
	Stamina.Adjust(0 - JumpCost);
}


