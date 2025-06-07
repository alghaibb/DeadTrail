#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Interface/SaveDTActorInterface.h"
#include "DTSaveGame.generated.h"

UCLASS()
class DEADTRAIL_API UDTSaveGame : public USaveGame
{
	GENERATED_BODY()
	
private:
	UPROPERTY()
	TMap<FGuid, FSaveDTActorData> SaveableDTActorData;
	UPROPERTY()
	FName CurrentLoadedLevel = "NONE";
	UPROPERTY()
	FSaveDTActorData PlayerData;

public:
	void SetSaveActorData(TMap<FGuid, FSaveDTActorData> Data);
	TMap<FGuid, FSaveDTActorData> GetSaveActorData();
	void SetCurrentLevel(const FName Level);
	FName GetCurrentLevel();

	void SetPlayerData(FSaveDTActorData Data);
	FSaveDTActorData GetPlayerData();
};
