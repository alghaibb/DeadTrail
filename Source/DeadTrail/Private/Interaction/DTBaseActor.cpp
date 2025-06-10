#include "Interaction/DTBaseActor.h"

ADTBaseActor::ADTBaseActor()
{
	PrimaryActorTick.bCanEverTick = true;
	SaveID = FGuid::NewGuid();
}

void ADTBaseActor::BeginPlay()
{
	Super::BeginPlay();
	if (SaveID.IsValid())
	{
		SaveID = FGuid::NewGuid();
	}
	
}

void ADTBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FGuid ADTBaseActor::GetActorSaveID_Implementation()
{
	return SaveID;
}

void ADTBaseActor::SetActorGUID_Implementation(const FGuid& NewGUID)
{
	if (SaveID.IsValid())
	{
		SaveID.Invalidate();
	}
	SaveID = NewGUID;
}

FSaveDTActorData ADTBaseActor::GetSaveData_Implementation()
{
	FSaveDTActorData Ret;
	Ret.ActorTransform = this->GetActorTransform();
	Ret.ActorClass = this->GetClass();
	Ret.WasSpawned = bWasSpawned;
	return Ret;
}

void ADTBaseActor::UpdateFromSave_Implementation()
{
	//UpdateFromSave();
	Execute_UpdateFromSave(this);
}

