#include "Interface/SaveDTActorInterface.h"

// Add default functionality here for any ISaveDTActorInterface functions 
// that are not pure virtual.

// === Actor GUID ===

FGuid ISaveDTActorInterface::GetActorSaveID_Implementation()
{
	FGuid Ret;
	Ret.Invalidate();
	return Ret;
}

void ISaveDTActorInterface::SetActorGUID_Implementation(const FGuid& NewGUID)
{
}

// === Actor Save Data ===

FSaveDTActorData ISaveDTActorInterface::GetSaveData_Implementation()
{
	return FSaveDTActorData();
}

void ISaveDTActorInterface::UpdateFromSave_Implementation()
{
	UpdateFromSave();
}

// === Component Save Data ===

FSaveComponentData ISaveDTActorInterface::GetSaveComponentData_Implementation()
{
	return FSaveComponentData();
}

void ISaveDTActorInterface::SetSaveComponentData_Implementation(FSaveComponentData Data)
{
}
