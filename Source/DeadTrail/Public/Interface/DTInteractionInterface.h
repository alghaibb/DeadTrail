#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DTInteractionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDTInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

class DEADTRAIL_API IDTInteractionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FText GetInteractionText();
	FText GetInteractionText_Implementation();

	UFUNCTION(BlueprintNativeEvent)
	void Interact(class ADTBaseCharacter* Caller);
	void Interact_Implementation(class ADTBaseCharacter* Caller);
	UFUNCTION(BlueprintNativeEvent)
	bool IsInteractable() const;
	bool IsInteractable_Implementation() const;

};
