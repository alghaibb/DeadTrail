#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "interface/SaveDTActorInterface.h"
#include "Logger.h"
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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	float Current = 100;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	float Max = 100;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	float PerSecondTick = 1;

public:
	FStatline() {}
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

	float Percentile() const { return Current / Max; }
	void AdjustTick(const float& NewTick) { PerSecondTick = NewTick; }
	float GetCurrent() const { return Current; }

	FString GetSaveString()
	{
		FString Ret = FString::SanitizeFloat(Current);
		Ret += "|";
		Ret += FString::SanitizeFloat(Max);
		Ret += "|";
		Ret += FString::SanitizeFloat(PerSecondTick);
		return Ret;
	}

	void UpdateFromSaveString(TArray<FString> Parts)
	{
		if (Parts.Num() != 3)
		{
			Logger::GetInstance()->AddMessage("FStatline::UpdatedFromSaveString called with other then 3 parts:", ERRORLEVEL::EL_WARNING);
			return;
		}
		Current = FCString::Atof(*Parts[0]);
		Max = FCString::Atof(*Parts[1]);
		PerSecondTick = FCString::Atof(*Parts[2]);
	}
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DEADTRAIL_API UStatlineComponent : public UActorComponent, public ISaveDTActorInterface
{
	GENERATED_BODY()

private:

	// === Movement Reference ===
	class UCharacterMovementComponent* MovementComponent;

	// === Stats ===
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	FStatline Health;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	FStatline Stamina;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true")) // TODO: Change to VisibleAnywhere for release
		FStatline Hunger = FStatline(100, 100, -0.125);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true")) // TODO: Change to VisibleAnywhere for release
		FStatline Thirst = FStatline(100, 100, -0.25);

	// === State Flags ===
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bIsSprinting = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bWantsToSprint = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bIsSneaking = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bIsWalking = false;

	// === Stat Settings ===
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float SprintCost = 2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float WalkSpeed = 130;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float JogSpeed = 335;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float SprintSpeed = 520;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float SneakSpeed = 230;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float JumpCost = 10;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float SecondsForStaminaExhaustion = 5;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float CurrentStaminaExhaustionTime = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float StarvingHealthLossPerSecond = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float DehydrationHealthLossPerSecond = 1;

	// === Internal Tick Logic ===
	void TickStats(const float& DeltaTime);
	void TickStamina(const float& DeltaTime);
	void TickHunger(const float& DeltaTime);
	void TickThirst(const float& DeltaTime);
	bool IsValidSprinting();

protected:

	virtual void BeginPlay() override;

public:

	UStatlineComponent();

	// === Tick ===
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// === External Control ===
	UFUNCTION(BlueprintCallable)
	void SetMovementComponentRef(UCharacterMovementComponent* Comp);

	UFUNCTION(BlueprintCallable)
	float GetStatPercentile(const EStatlineType Stat) const;

	UFUNCTION(BlueprintCallable)
	bool CanSprint() const;

	UFUNCTION(BlueprintCallable)
	void SetSprinting(const bool& IsSprinting);

	UFUNCTION(BlueprintCallable)
	void SetSneaking(const bool& IsSneaking);

	UFUNCTION(BlueprintCallable)
	void SetWalking(const bool& IsWalking);

	UFUNCTION(BlueprintCallable)
	bool CanJump() const;

	UFUNCTION(BlueprintCallable)
	void HasJumped();

	// === Save Interface ===
	virtual FSaveComponentData GetSaveComponentData_Implementation();
	void SetSaveComponentData_Implementation(FSaveComponentData Data);
};
