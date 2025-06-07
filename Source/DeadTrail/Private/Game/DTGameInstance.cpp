#include "Game/DTGameInstance.h"
#include "Game/DTSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "EngineUtils.h"
#include <Serialization/ObjectAndNameAsStringProxyArchive.h>

UDTGameInstance::UDTGameInstance()
{
	
}

void UDTGameInstance::CreateSaveSlot()
{
	SaveGameObject = Cast<UDTSaveGame>(UGameplayStatics::CreateSaveGameObject(UDTSaveGame::StaticClass()));
}

void UDTGameInstance::GatherActorData()
{	
	for (FActorIterator It(GetWorld()); It; ++It)
	{
		AActor* Actor = *It;
		if (!IsValid(Actor) || !Actor->Implements<USaveDTActorInterface>())
		{
			continue;
		}
		ISaveDTActorInterface* Inter = Cast<ISaveDTActorInterface>(Actor);
		if (Inter == nullptr)
		{
			continue;
		}
		FGuid SAI = Inter->GetActorSaveID_Implementation();
		if (!SAI.IsValid())
		{
			continue;
		}
		FSaveDTActorData SAD = Inter->GetSaveData_Implementation();
		
		FMemoryWriter MemWriter(SAD.ByteData);
		FObjectAndNameAsStringProxyArchive Ar(MemWriter, true);
		Ar.ArIsSaveGame = true;
		Actor->Serialize(Ar);

		for (auto ActorComp : Actor->GetComponents())
		{
			if (!ActorComp->Implements<USaveDTActorInterface>())
			{
				continue;
			}
			ISaveDTActorInterface* CompInter = Cast<ISaveDTActorInterface>(ActorComp);
			if (CompInter == nullptr)
			{
				continue;
			}
			FSaveComponentData SCD = CompInter->GetSaveComponentData_Implementation();
			FMemoryWriter CompMemWriter(SCD.ByteData);
			FObjectAndNameAsStringProxyArchive CAr(CompMemWriter, true);
			CAr.ArIsSaveGame = true;
			ActorComp->Serialize(CAr);
			SCD.ComponentClass = ActorComp->GetClass();

			SAD.ComponentData.Add(SCD);
		}

		SaveableDTActorData.Add(SAI, SAD);
	}

	GatherPlayerData();
}

void UDTGameInstance::LoadGame()
{
	if (!UGameplayStatics::DoesSaveGameExist(SaveGameName, 0))
	{
		// TODO: Add logging/error message for missing save games
		return;
	}

	SaveableDTActorData.Empty();
	SaveGameObject = Cast<UDTSaveGame>(UGameplayStatics::LoadGameFromSlot(SaveGameName, 0));
	SaveableDTActorData = SaveGameObject->GetSaveActorData();
	PlayerData = SaveGameObject->GetPlayerData();

	for (TTuple<FGuid, FSaveDTActorData> SAD : SaveableDTActorData)
	{
		if (SAD.Value.WasSpawned)
		{
			AActor* SpawnedActor = GetWorld()->SpawnActor(SAD.Value.ActorClass->StaticClass(), &SAD.Value.ActorTransform);
			ISaveDTActorInterface* Inter = Cast<ISaveDTActorInterface>(SpawnedActor);
			if (Inter == nullptr)
			{
				continue;
			}
			Inter->SetActorGUID(SAD.Key);
		}
	}

	for (FActorIterator It(GetWorld()); It; ++It)
	{
		AActor* Actor = *It;
		if (!IsValid(Actor) || !Actor->Implements<USaveDTActorInterface>())
		{
			continue;
		}
		ISaveDTActorInterface* Inter = Cast<ISaveDTActorInterface>(Actor);
		if (Inter == nullptr)
		{
			continue;
		}
		FGuid SAI = Inter->GetActorSaveID_Implementation();
		if (!SaveableDTActorData.Find(SAI))
		{
			continue;
		}
		FSaveDTActorData SAD = SaveableDTActorData[SAI];
		Actor->SetActorTransform(SAD.ActorTransform);

		FMemoryReader MemReader(SAD.ByteData);
		FObjectAndNameAsStringProxyArchive Ar(MemReader, true);
		Ar.ArIsSaveGame = true;
		Actor->Serialize(Ar);
		
		for (auto ActorComp : Actor->GetComponents())
		{
			if (!ActorComp->Implements<USaveDTActorInterface>())
			{
				continue;
			}
			ISaveDTActorInterface* CompInter = Cast<ISaveDTActorInterface>(ActorComp);
			if (CompInter == nullptr)
			{
				continue;
			}
			for (auto SCD : SAD.ComponentData)
			{
				if (SCD.ComponentClass != ActorComp->GetClass())
				{
					continue;
				}
				FMemoryReader CompMemReader(SCD.ByteData);
				FObjectAndNameAsStringProxyArchive CAr(CompMemReader, true);
				CAr.ArIsSaveGame = true;
				ActorComp->Serialize(CAr);
				if (SCD.RawData.IsEmpty())
				{
					break;
				}
				CompInter->SetSaveComponentData_Implementation(SCD);
				break;
			}
		}
	}
	SetPlayerData();
}

void UDTGameInstance::GatherPlayerData()
{
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	ISaveDTActorInterface* Inter = Cast<ISaveDTActorInterface>(PlayerCharacter);
	if (Inter == nullptr)
	{
		// TODO: Add logging/error message for missing player character interface
		return;
	}
	FSaveDTActorData SAD = Inter->GetSaveData_Implementation();
	FMemoryWriter MemWriter(SAD.ByteData);
	FObjectAndNameAsStringProxyArchive Ar(MemWriter, true);
	Ar.ArIsSaveGame = true;
	PlayerCharacter->Serialize(Ar);

	for (auto ActorComp : PlayerCharacter->GetComponents())
	{
		if (!ActorComp->Implements<USaveDTActorInterface>())
		{
			continue;
		}
		ISaveDTActorInterface* CompInter = Cast<ISaveDTActorInterface>(ActorComp);
		if (CompInter == nullptr)
		{
			continue;
		}
		FSaveComponentData SCD = CompInter->GetSaveComponentData_Implementation();
		FMemoryWriter CompMemWriter(SCD.ByteData);
		FObjectAndNameAsStringProxyArchive CAr(CompMemWriter, true);
		CAr.ArIsSaveGame = true;
		ActorComp->Serialize(CAr);
		SCD.ComponentClass = ActorComp->GetClass();

		SAD.ComponentData.Add(SCD);
	}
	PlayerData = SAD;
}

void UDTGameInstance::SetPlayerData()
{
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	ISaveDTActorInterface* Inter = Cast<ISaveDTActorInterface>(PlayerCharacter);
	if (Inter == nullptr)
	{
		// TODO: Add logging/error message for missing player character interface
		return;
	}
	PlayerCharacter->SetActorTransform(PlayerData.ActorTransform);
	FMemoryReader PCMemReader(PlayerData.ByteData);
	FObjectAndNameAsStringProxyArchive Ar(PCMemReader, true);
	Ar.ArIsSaveGame = true;
	PlayerCharacter->Serialize(Ar);

	for (auto ActorComp : PlayerCharacter->GetComponents())
	{
		if (!ActorComp->Implements<USaveDTActorInterface>())
		{
			continue;
		}
		ISaveDTActorInterface* CompInter = Cast<ISaveDTActorInterface>(ActorComp);
		if (CompInter == nullptr)
		{
			continue;
		}
		for (auto SCD : PlayerData.ComponentData)
		{
			if (SCD.ComponentClass != ActorComp->GetClass())
			{
				continue;
			}
			FMemoryReader CompMemReader(SCD.ByteData);
			FObjectAndNameAsStringProxyArchive CAr(CompMemReader, true);
			CAr.ArIsSaveGame = true;
			ActorComp->Serialize(CAr);
			if (SCD.RawData.IsEmpty())
			{
				break;
			}
			CompInter->SetSaveComponentData_Implementation(SCD);
			break;
		}
	}
}

void UDTGameInstance::AddActorData(const FGuid& ActorID, FSaveDTActorData ActorData)
{
	SaveableDTActorData.Add(ActorID, ActorData);
}

FSaveDTActorData UDTGameInstance::GetActorData(const FGuid& ActorID)
{
	return SaveableDTActorData[ActorID];
}

void UDTGameInstance::DEV_SaveGame()
{
	if (SaveGameObject == nullptr)
	{
		CreateSaveSlot();
	}
	GatherActorData();
	SaveGameObject->SetSaveActorData(SaveableDTActorData);
	SaveGameObject->SetPlayerData(PlayerData);
	UGameplayStatics::SaveGameToSlot(SaveGameObject, SaveGameName, 0);
}

void UDTGameInstance::DEV_LoadGame()
{
	LoadGame();
}

