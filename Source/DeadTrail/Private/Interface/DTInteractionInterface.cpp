#include "Interface/DTInteractionInterface.h"

// Add default functionality here for any IDTInteractionInterface functions that are not pure virtual.

FText IDTInteractionInterface::GetInteractionText_Implementation()
{
	return FText();
}

void IDTInteractionInterface::Interact_Implementation(ADTBaseCharacter* Caller)
{
	Interact(Caller);
}

bool IDTInteractionInterface::IsInteractable_Implementation() const
{
	return true;
}
