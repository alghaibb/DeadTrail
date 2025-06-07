#include "Interface/SaveDTActorInterface.h"

// Add default functionality here for any ISaveDTActorInterface functions that are not pure virtual.

FGuid ISaveDTActorInterface::GetActorSaveID_Implementation()
{
	FGuid Ret = FGuid();
	Ret.Invalidate();
    return Ret;
}

void ISaveDTActorInterface::SetActorGUID_Implementation(const FGuid& NewGUID)
{
}

FSaveDTActorData ISaveDTActorInterface::GetSaveData_Implementation()
{
	return FSaveDTActorData();
}

FSaveComponentData ISaveDTActorInterface::GetSaveComponentData_Implementation()
{
	return FSaveComponentData();
}

void ISaveDTActorInterface::SetSaveComponentData_Implementation(FSaveComponentData Data)
{
}

