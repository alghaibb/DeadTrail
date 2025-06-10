// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "EasyFootstepPluginTypes.h"
#include "EasyFootstepPluginSettings.generated.h"

/**
 * Easy Footstep Plugin settings class. 
 * Used to set plugin settings in the project settings. 
 * These settings are save in the DefaultEngine.ini file.
 */
UCLASS(config = Engine, DefaultConfig, meta = (DisplayName = "Easy Footstep Plugin"))
class EASYFOOTSTEPPLUGIN_API UEasyFootstepPluginSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    /**
     * Constructor of the Easy Footstep Plugin settings class. 
     * Initialise surface settings on first run.
     */
    UEasyFootstepPluginSettings(const FObjectInitializer& ObjectInitializer);

    /**
     * Default collision Object Type for water objects. 
     * Create the new collision object channel for water objects (Ignore) and select it for Water Object Type property.
     */
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Footstep Settings")
    TEnumAsByte<EObjectTypeQuery> WaterObjectType;

    /**
     * Default collision Object Type for surface overrider objects.
     * Create the new collision object channel for surface overrider objects (Ignore) and select it for Surface Overrider Object Type property.
     */
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Footstep Settings")
    TEnumAsByte<EObjectTypeQuery> SurfaceOverriderObjectType;

    /**
     * Array of physical surfaces and their relevant names.
     * Used to quickly set up existing projects to use settings from the footstep preset table.
     * All default surface names are configured in the footstep preset table in the plugin content folder.
     * Can be empty if settings in data table are set correctly for each physical surface.
     */
    UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, Category = "Footstep Settings")
    TMap<FName, TEnumAsByte<EPhysicalSurface>> SurfaceTypes;
};