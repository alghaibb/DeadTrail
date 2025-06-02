#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DTBaseCharacter.generated.h"

UCLASS()
class DEADTRAIL_API ADTBaseCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStatlineComponent* Statline;

public:
	ADTBaseCharacter();

protected:
	virtual void BeginPlay() override;
	bool CanJump() const;
	void HasJumped();

	bool CanSprint() const;
	void SetSprinting(const bool& IsSprinting);
	void SetWalking(const bool& IsWalking);

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
