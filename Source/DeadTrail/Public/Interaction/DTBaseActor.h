#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/SaveDTActorInterface.h"
#include "DTBaseActor.generated.h"

UCLASS()
class DEADTRAIL_API ADTBaseActor : public AActor, public ISaveDTActorInterface
{
	GENERATED_BODY()

private:
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FGuid SaveID;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bWasSpawned = false;
	virtual void BeginPlay() override;

public:	
	ADTBaseActor();

	virtual void Tick(float DeltaTime) override;

	virtual FGuid GetActorSaveID_Implementation();
	void SetActorGUID_Implementation(const FGuid& NewGUID);
	virtual FSaveDTActorData GetSaveData_Implementation();
	virtual void UpdateFromSave_Implementation();

};
