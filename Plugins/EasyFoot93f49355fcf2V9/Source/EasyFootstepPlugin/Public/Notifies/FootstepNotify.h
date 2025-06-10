// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EasyFootstepPluginTypes.h"
#include "Components/FootstepComponent.h"
#include "FootstepNotify.generated.h"

/**
 * Animation notify which is used to play the footstep at the moment when the character touches the surface.
 */
UCLASS()
class EASYFOOTSTEPPLUGIN_API UFootstepNotify : public UAnimNotify
{
    GENERATED_BODY()

public:
    // The name of the bone in which the footstep will be played. 
    // FootSocket must match the FootSocket in the footstep component.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    FName FootSocket = "foot_l";

    // Type of the footstep.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    EFootstepType FootstepType = EFootstepType::Default;

    // Determines if the footstep component should play sounds.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    bool PlaySounds = true;    

    // Determines if the footstep component should spawn effects.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    bool SpawnEffects = true;

    // Sound to play in the editor. Used only for preview.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Preview")
    USoundBase* PreviewSound;

private:
    virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};