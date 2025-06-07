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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStatlineComponent* Statline;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	FGuid SaveActorID;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	bool WasSpawned = false;

	virtual void BeginPlay() override;
	bool CanJump() const;
	void HasJumped();

	bool CanSprint() const;
	void SetSprinting(const bool& IsSprinting);
	
	void SetWalking(const bool& IsWalking);

	void SetSneaking(const bool& IsSneaking);

public:	
	ADTBaseCharacter();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FGuid GetActorSaveID_Implementation();
	FSaveDTActorData GetSaveData_Implementation();
	void SetActorGUID_Implementation(const FGuid& NewGUID);

};
