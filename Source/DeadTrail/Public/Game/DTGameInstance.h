#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Interface/SaveDTActorInterface.h"
#include "DTGameInstance.generated.h"


UCLASS()
class DEADTRAIL_API UDTGameInstance : public UGameInstance
{
	GENERATED_BODY()

private:
	TMap<FGuid, FSaveDTActorData> SaveableDTActorData;
	UPROPERTY()
	class UDTSaveGame* SaveGameObject = nullptr;
	FString SaveGameName = TEXT("DEFAULT");
	FName CurrentLoadedLevel = "NONE";

	UDTGameInstance();

	void CreateSaveSlot();
	void GatherActorData();
	void LoadGame();

public:
	UFUNCTION(BlueprintCallable)
	void AddActorData(const FGuid& ActorID, FSaveDTActorData ActorData);
	FSaveDTActorData GetActorData(const FGuid& ActorID);

	UFUNCTION(BlueprintCallable)
	void DEV_SaveGame();
	UFUNCTION(BlueprintCallable)
	void DEV_LoadGame();
};
