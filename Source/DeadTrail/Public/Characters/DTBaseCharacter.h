#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/SaveDTActorInterface.h"
#include "DTBaseCharacter.generated.h"

UCLASS()
class DEADTRAIL_API ADTBaseCharacter : public ACharacter, public ISaveDTActorInterface
{
	GENERATED_BODY()

private:

	// === Components ===
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStatlineComponent* Statline;

protected:

	// === Save System ===
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	FGuid SaveActorID;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	bool WasSpawned = false;

	// === Lifecycle ===
	virtual void BeginPlay() override;

	// === Statline Movement Checks ===
	bool CanJump() const;
	void HasJumped();

	bool CanSprint() const;
	void SetSprinting(const bool& IsSprinting);

	void SetWalking(const bool& IsWalking);
	void SetSneaking(const bool& IsSneaking);

public:

	// === Constructor ===
	ADTBaseCharacter();

	// === Tick / Input ===
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// === Save Interface ===
	FGuid GetActorSaveID_Implementation();
	FSaveDTActorData GetSaveData_Implementation();
	void SetActorGUID_Implementation(const FGuid& NewGUID);
};
