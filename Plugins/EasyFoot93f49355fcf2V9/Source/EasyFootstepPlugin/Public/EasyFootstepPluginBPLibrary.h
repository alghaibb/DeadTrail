// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "EasyFootstepPluginTypes.h"
#include "Components/FootstepComponent.h"
#include "EasyFootstepPluginBPLibrary.generated.h"

/*
 *	Easy Footstep Plugin functions library class.
 */
UCLASS()
class UEasyFootstepPluginBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_UCLASS_BODY()

    /**
     * Returns default collision ObjectType for surface overrider objects from Easy Footstep Plugin settings.
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Easy Footstep Plugin")
    static const TEnumAsByte<EObjectTypeQuery> GetSurfaceOverriderObjectTypeQuery();

    /**
     * Returns default collision ObjectType for water objects from Easy Footstep Plugin settings.
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Easy Footstep Plugin")
    static const TEnumAsByte<EObjectTypeQuery> GetWaterObjectTypeQuery();
        
    /**
     * Returns the translation of the pelvis bone for a character with two legs.
     *
     * @param bSuccess                  True if components are exist, false otherwise.
     * @param PelvisTranslation         Translation of the pelvis bone.
     * @param LeftFootstepComponent     Footstep component for the left leg.
     * @param RightFootstepComponent    Footstep component for the right leg.
     */
    UFUNCTION(BlueprintCallable, Category = "Easy Footstep Plugin")
    static void GetTwoLegsPelvisBoneTranslation(UFootstepComponent* LeftFootstepComponent, UFootstepComponent* RightFootstepComponent, bool& bSuccess, float& PelvisTranslation);
};
