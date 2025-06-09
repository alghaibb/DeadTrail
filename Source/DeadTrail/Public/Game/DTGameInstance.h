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

	// === Save System ===
	UPROPERTY()
	TMap<FGuid, FSaveDTActorData> SaveableDTActorData;

	UPROPERTY()
	class UDTSaveGame* SaveGameObject = nullptr;

	UPROPERTY()
	FString SaveGameName = TEXT("DEFAULT");

	UPROPERTY()
	FName CurrentLoadedLevel = "NONE";

	UPROPERTY()
	FSaveDTActorData PlayerData;

	// === Internal Save Logic ===
	UDTGameInstance();
	void CreateSaveSlot();
	void GatherActorData();
	void LoadGame();
	void GatherPlayerData();
	void SetPlayerData();

public:

	// === Public API ===
	UFUNCTION(BlueprintCallable)
	void AddActorData(const FGuid& ActorID, FSaveDTActorData ActorData);

	FSaveDTActorData GetActorData(const FGuid& ActorID);

	UFUNCTION(BlueprintCallable)
	void DEV_SaveGame();

	UFUNCTION(BlueprintCallable)
	void DEV_LoadGame();
};
