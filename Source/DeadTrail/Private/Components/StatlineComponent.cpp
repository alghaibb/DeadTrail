#include "Components/StatlineComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

void UStatlineComponent::TickStats(const float& DeltaTime)
{
	TickStamina(DeltaTime);
	TickHunger(DeltaTime);
	TickThirst(DeltaTime);
	if (Thirst.GetCurrent() <= 0.0 || Hunger.GetCurrent() <= 0.0)
	{
		return;
	}
	Health.TickStat(DeltaTime);
}

void UStatlineComponent::TickStamina(const float& DeltaTime)
{
	if (CurrentStaminaExhaustionTime > 0.0)
	{
		CurrentStaminaExhaustionTime -= DeltaTime;
		return;
	}

	if (bIsSprinting && IsValidSprinting())
	{
		Stamina.TickStat(0 - abs((DeltaTime * SprintCost)));
		
		if (Stamina.GetCurrent() <= 0.0)
		{
			bWantsToSprint = false;
			SetSprinting(false);
			CurrentStaminaExhaustionTime = SecondsForStaminaExhaustion;
		}
		
		return;
	}

	Stamina.TickStat(DeltaTime);
}

void UStatlineComponent::TickHunger(const float& DeltaTime)
{
	if (Hunger.GetCurrent() <= 0.0)
	{
		Health.Adjust(0 - abs(StarvingHealthLossPerSecond * DeltaTime));
	}

	Hunger.TickStat(DeltaTime);
}

void UStatlineComponent::TickThirst(const float& DeltaTime)
{
	if (Thirst.GetCurrent() <= 0.0)
	{
		Health.Adjust(0 - abs(DehydrationHealthLossPerSecond * DeltaTime));
	}
	
	Thirst.TickStat(DeltaTime);
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
	bIsSprinting = IsSprinting;
	if (bIsSneaking && !bIsSprinting)
	{
		return;
	}
	bIsSneaking = false;
	MovementComponent->MaxWalkSpeed = bIsSprinting ? SprintSpeed : JogSpeed;
}

void UStatlineComponent::SetSneaking(const bool& IsSneaking)
{
	bIsSneaking = IsSneaking;
	if (bIsSprinting && bIsSneaking)
	{
		return;
	}
	bIsSprinting = false;
	MovementComponent->MaxWalkSpeed = bIsSneaking ? SneakSpeed : (bIsWalking ? WalkSpeed : JogSpeed);
}

void UStatlineComponent::SetWalking(const bool& IsWalking)
{
	bIsWalking = IsWalking;
	if (bIsSneaking && bIsWalking)
	{
		return;
	}
	bIsSneaking = false;
	MovementComponent->MaxWalkSpeed = bIsWalking ? WalkSpeed : (bIsSprinting ? SprintSpeed : JogSpeed);
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


