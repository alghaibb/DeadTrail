#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SaveDTActorInterface.generated.h"

USTRUCT(BlueprintType)
struct FSaveComponentData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<uint8> ByteData;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UClass* ComponentClass;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> RawData;
};

USTRUCT(BlueprintType)
struct FSaveDTActorData
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FTransform ActorTransform;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<uint8> ByteData;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FSaveComponentData> ComponentData;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool WasSpawned = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UClass* ActorClass;
};

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USaveDTActorInterface : public UInterface
{
	GENERATED_BODY()
};

class DEADTRAIL_API ISaveDTActorInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent)
	FGuid GetActorSaveID();
	virtual FGuid GetActorSaveID_Implementation();
	UFUNCTION(BlueprintNativeEvent)
	void SetActorGUID(const FGuid& NewGUID);
	void SetActorGUID_Implementation(const FGuid& NewGUID);
	UFUNCTION(BlueprintNativeEvent)
	FSaveDTActorData GetSaveData();
	virtual FSaveDTActorData GetSaveData_Implementation();
	UFUNCTION(BlueprintNativeEvent)
	FSaveComponentData GetSaveComponentData();
	virtual FSaveComponentData GetSaveComponentData_Implementation();
	UFUNCTION(BlueprintNativeEvent)
	void SetSaveComponentData(FSaveComponentData Data);
	virtual void SetSaveComponentData_Implementation(FSaveComponentData Data);


};
