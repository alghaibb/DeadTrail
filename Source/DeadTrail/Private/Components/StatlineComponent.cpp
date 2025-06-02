#include "Components/StatlineComponent.h"

void UStatlineComponent::TickStats(const float& Deltatime)
{
	Health.TickStat(Deltatime);
	Stamina.TickStat(Deltatime);
	Hunger.TickStat(Deltatime);
	Thirst.TickStat(Deltatime);
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

