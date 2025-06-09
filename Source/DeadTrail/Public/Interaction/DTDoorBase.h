#pragma once

#include "CoreMinimal.h"
#include "Interaction/DTBaseActor.h"
#include "Interface/DTInteractionInterface.h"
#include "DTDoorBase.generated.h"

UCLASS()
class DEADTRAIL_API ADTDoorBase : public ADTBaseActor, public IDTInteractionInterface
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, SaveGame, meta = (AllowPrivateAccess = "true"))
	bool bIsOpen = false;

public:
	ADTDoorBase();

	FText GetInteractionText_Implementation();
	void Interact_Implementation(class ADTBaseCharacter* Caller);
	bool IsInteractable_Implementation() const;

};
