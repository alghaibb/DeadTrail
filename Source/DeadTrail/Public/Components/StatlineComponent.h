#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatlineComponent.generated.h"

UENUM(BlueprintType)
enum class EStatlineType : uint8
{
	HEALTH UMETA(DisplayName = "Health"),
	STAMINA UMETA(DisplayName = "Stamina"),
	HUNGER UMETA(DisplayName = "Hunger"),
	THIRST UMETA(DisplayName = "Thirst"),
};

USTRUCT(BlueprintType)
struct FStatline
{
	GENERATED_USTRUCT_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float Current = 100;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float Max = 100;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float PerSecondTick = 1;

public:
	FStatline(){}
	FStatline(const float& current, const float& max, const float& tick)
	{
		Current = current;
		Max = max;
		PerSecondTick = tick;
	}

	void TickStat(const float& DeltaTime)
	{
		Current = FMath::Clamp(Current + (PerSecondTick * DeltaTime), 0, Max);
	}

	void Adjust(const float& Amount)
	{
		Current = FMath::Clamp(Current + Amount, 0, Max);
	}

	float Percentile() const
	{
		return Current / Max;
	}

	void AdjustTick(const float& NewTick)
	{
		PerSecondTick = NewTick;
	}

	float GetCurrent() const
	{
		return Current;
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEADTRAIL_API UStatlineComponent : public UActorComponent
{
	GENERATED_BODY()

private:

	class UCharacterMovementComponent* MovementComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FStatline Health;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FStatline Stamina;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FStatline Hunger = FStatline(100, 100, -0.125);
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FStatline Thirst = FStatline(100, 100, -0.25); 

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bIsSprinting = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bIsWalking = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float SprintCost = 2;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float WalkSpeed = 300;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float JogSpeed = 500;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float SprintSpeed = 700;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float JumpCost = 10;

	void TickStats(const float& Deltatime);
	void TickStamina(const float& DeltaTime);
	bool IsValidSprinting();

protected:
	virtual void BeginPlay() override;

public:	
	
	UStatlineComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void SetMovementComponentRef(UCharacterMovementComponent* Comp);

	UFUNCTION(BlueprintCallable)
	float GetStatPercentile(const EStatlineType Stat) const;

	UFUNCTION(BlueprintCallable)
	bool CanSprint() const;
	UFUNCTION(BlueprintCallable)
	void SetSprinting(const bool& IsSprinting);
	UFUNCTION(BlueprintCallable)
	void SetWalking(const bool& IsWalking);
	
	UFUNCTION(BlueprintCallable)
	bool CanJump() const;
	UFUNCTION(BlueprintCallable)
	void HasJumped();
		
};
