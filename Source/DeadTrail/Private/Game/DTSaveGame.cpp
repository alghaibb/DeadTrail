#include "Game/DTSaveGame.h"
#include "Interface/SaveDTActorInterface.h"

void UDTSaveGame::SetSaveActorData(TMap<FGuid, FSaveDTActorData> Data)
{
	SaveableDTActorData = Data;
}

TMap<FGuid, FSaveDTActorData> UDTSaveGame::GetSaveActorData()
{
	return SaveableDTActorData;
}

void UDTSaveGame::SetCurrentLevel(const FName Level)
{
	CurrentLoadedLevel = Level;
}

FName UDTSaveGame::GetCurrentLevel()
{
	return CurrentLoadedLevel;
}
