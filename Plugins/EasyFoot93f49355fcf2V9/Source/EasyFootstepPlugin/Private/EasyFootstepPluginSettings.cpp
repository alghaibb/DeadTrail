// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#include "EasyFootstepPluginSettings.h"

/**
 * Constructor of the Easy Footstep Plugin settings class.
 * Initialise surface settings on first run.
 */
UEasyFootstepPluginSettings::UEasyFootstepPluginSettings(const FObjectInitializer& ObjectInitializer)
{
    this->CategoryName = "Plugins";
    this->SectionName = "Easy Footsteps Plugin";

    this->SurfaceTypes.Add("Default", EPhysicalSurface::SurfaceType_Default);
    this->SurfaceTypes.Add("Grass", EPhysicalSurface::SurfaceType1);
    this->SurfaceTypes.Add("Sand", EPhysicalSurface::SurfaceType2);
    this->SurfaceTypes.Add("Stone", EPhysicalSurface::SurfaceType3);
    this->SurfaceTypes.Add("Wood", EPhysicalSurface::SurfaceType4);
    this->SurfaceTypes.Add("Dirt", EPhysicalSurface::SurfaceType5);
    this->SurfaceTypes.Add("Gravel", EPhysicalSurface::SurfaceType6);
    this->SurfaceTypes.Add("Ice", EPhysicalSurface::SurfaceType7);
    this->SurfaceTypes.Add("Metal", EPhysicalSurface::SurfaceType8);
    this->SurfaceTypes.Add("Mud", EPhysicalSurface::SurfaceType9);
    this->SurfaceTypes.Add("Snow", EPhysicalSurface::SurfaceType10);
}