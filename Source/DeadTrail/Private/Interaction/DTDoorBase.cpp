#include "Interaction/DTDoorBase.h"

ADTDoorBase::ADTDoorBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

FText ADTDoorBase::GetInteractionText_Implementation()
{
	return bIsOpen ? FText::FromString("Close") : FText::FromString("Open");
}

void ADTDoorBase::Interact_Implementation(ADTBaseCharacter* Caller)
{
	Interact(Caller);
}

bool ADTDoorBase::IsInteractable_Implementation() const
{
	return true;
}