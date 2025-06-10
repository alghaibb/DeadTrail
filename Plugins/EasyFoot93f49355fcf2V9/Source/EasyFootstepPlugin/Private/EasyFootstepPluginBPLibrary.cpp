// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#include "EasyFootstepPluginBPLibrary.h"
#include "EasyFootstepPluginSettings.h"
#include "EasyFootstepPlugin.h"

UEasyFootstepPluginBPLibrary::UEasyFootstepPluginBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}

/**
 * Returns default collision ObjectType for surface overrider objects from Easy Footstep Plugin settings.
 */
const TEnumAsByte<EObjectTypeQuery> UEasyFootstepPluginBPLibrary::GetSurfaceOverriderObjectTypeQuery()
{
    auto settings = GetDefault<UEasyFootstepPluginSettings>();
    return settings->SurfaceOverriderObjectType;
}

/**
 * Returns default collision ObjectType for water objects from Easy Footstep Plugin settings.
 */
const TEnumAsByte<EObjectTypeQuery> UEasyFootstepPluginBPLibrary::GetWaterObjectTypeQuery()
{
    auto settings = GetDefault<UEasyFootstepPluginSettings>();
    return settings->WaterObjectType;
}

/**
 * Returns the translation of the pelvis bone for a character with two legs.
 *
 * @param bSuccess                  True if components are exist, false otherwise.
 * @param PelvisTranslation         Translation of the pelvis bone.
 * @param LeftFootstepComponent     Footstep component for the left leg.
 * @param RightFootstepComponent    Footstep component for the right leg.
 */
void UEasyFootstepPluginBPLibrary::GetTwoLegsPelvisBoneTranslation(  //
    UFootstepComponent* LeftFootstepComponent,                       //
    UFootstepComponent* RightFootstepComponent,                      //
    bool& bSuccess,                                                  //
    float& PelvisTranslation)
{
    if (LeftFootstepComponent && RightFootstepComponent)
    {
        bSuccess = true;
        PelvisTranslation = LeftFootstepComponent->GetTwoLegsPelvisBoneTranslation(RightFootstepComponent);
        return;
    }

    bSuccess = false;
    return;
}
