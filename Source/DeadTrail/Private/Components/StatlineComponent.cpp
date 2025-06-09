#include "Components/StatlineComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DTUtils.h"
#include "Logger.h"

// === Constructor & Lifecycle ===

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

// === Stat Ticking ===

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
		UE_LOG(LogTemp, Warning, TEXT("Draining stamina... Current: %f"), Stamina.GetCurrent());

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

// === Stat Queries ===

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
		Logger::GetInstance()->AddMessage("GetStatPercentile called with invalid stat type:", ERRORLEVEL::EL_WARNING);
		break;
	}
	return -1;
}

bool UStatlineComponent::IsValidSprinting()
{
	if (!MovementComponent)
		return false;

	return MovementComponent->Velocity.Length() > JogSpeed && !MovementComponent->IsFalling();
}

// === State Flags & Movement Control ===

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

bool UStatlineComponent::CanJump() const
{
	if (!MovementComponent)
		return false;

	return MovementComponent->IsMovingOnGround() && Stamina.GetCurrent() >= JumpCost;
}

void UStatlineComponent::HasJumped()
{
	Stamina.Adjust(0 - JumpCost);
}

// === Save System ===

FSaveComponentData UStatlineComponent::GetSaveComponentData_Implementation()
{
	FSaveComponentData Ret;

	Ret.ComponentClass = this->GetClass();
	Ret.RawData.Add(Health.GetSaveString());
	Ret.RawData.Add(Stamina.GetSaveString());
	Ret.RawData.Add(Hunger.GetSaveString());
	Ret.RawData.Add(Thirst.GetSaveString());

	return Ret;
}

void UStatlineComponent::SetSaveComponentData_Implementation(FSaveComponentData Data)
{
	TArray<FString> Parts;

	for (int i = 0; i < Data.RawData.Num(); i++)
	{
		Parts.Empty();
		Parts = ChopString(Data.RawData[i], '|');

		switch (i)
		{
		case 0:
			Health.UpdateFromSaveString(Parts);
			break;
		case 1:
			Stamina.UpdateFromSaveString(Parts);
			break;
		case 2:
			Hunger.UpdateFromSaveString(Parts);
			break;
		case 3:
			Thirst.UpdateFromSaveString(Parts);
			break;
		default:
			Logger::GetInstance()->AddMessage("SetSaveComponentData called with invalid data index:", ERRORLEVEL::EL_WARNING);
			break;
		}
	}
}
