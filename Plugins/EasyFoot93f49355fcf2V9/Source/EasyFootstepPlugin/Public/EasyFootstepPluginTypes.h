// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#pragma once

#include "Kismet/KismetSystemLibrary.h"
#include "Engine/DataTable.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EasyFootstepPluginTypes.generated.h"

class USoundBase;
class UParticleSystem;
class UMaterialInstance;
class UNiagaraSystem;

/**
 * Footstep types.
 */
UENUM(BlueprintType)
enum class EFootstepType : uint8
{
    Default,
    Walk,
    Jog,
    Run,
    Jump,
    Land,
    CustomType1,
    CustomType2,
    CustomType3
};

/**
 * Footstep sound data structure.
 * Used for set up sounds for certain surface.
 */
USTRUCT(BlueprintType)
struct FFootstepSoundData
{
    GENERATED_USTRUCT_BODY()

    /**
     * Surface type.
     *
     * Presets data table info:
     * If type is Default then it will be used for each surface type which is not set.
     * If key of structure is exist in the plugin settings, it does not matter which surface type is set.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    TEnumAsByte<EPhysicalSurface> SurfaceType = EPhysicalSurface::SurfaceType_Default;

    /**
     * The sound to be played on this surface type.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    USoundBase* Sound = NULL;
};

/**
 * Footstep effects data structure.
 * Used for set up effects for certain surface.
 */
USTRUCT(BlueprintType)
struct FFootstepEffectData
{
    GENERATED_USTRUCT_BODY()

    /**
     * Surface type.
     *
     * Presets data table info:
     * If type is Default then it will be used for each surface type which is not set.
     * If key of structure is exist in the plugin settings, it does not matter which surface type is set.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    TEnumAsByte<EPhysicalSurface> SurfaceType = EPhysicalSurface::SurfaceType_Default;

    /**
     * The particle system to be spawned on this surface type.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    UParticleSystem* ParticleSystem = NULL;

    /**
     * The niagara system to be spawned on this surface type.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    UNiagaraSystem* NiagaraSystem = NULL;
};

/**
 * Footstep decal effect data structure.
 * Used for set up decal effect for certain surface.
 */
USTRUCT(BlueprintType)
struct FFootstepDecalData
{
    GENERATED_USTRUCT_BODY()

    /**
     * Surface type.
     *
     * Presets data table info:
     * If type is Default then it will be used for each surface type which is not set.
     * If key of structure is exist in the plugin settings, it does not matter which surface type is set.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    TEnumAsByte<EPhysicalSurface> SurfaceType = EPhysicalSurface::SurfaceType_Default;

    /**
     * The decal to be spawned on this surface type.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    UMaterialInstance* DecalMaterial = NULL;

    /**
     * The size of the decal.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    FVector DecalSize = FVector(1.0f, 1.0f, 1.0f);

    /**
     * The lifetime of the decal.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    float DecalLifeSpan = 30.0f;
};

/**
 * Footstep type data structure.
 * Contains data of sounds and effects which should be played for different footstep types.
 */
USTRUCT(BlueprintType)
struct FFootstepTypeData
{
    GENERATED_USTRUCT_BODY()

    /**
     * Footstep type.
     *
     * Presets data table info:
     * If type is Default then it will be used for each footstep type which is not set.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    EFootstepType FootstepType = EFootstepType::Default;

    /**
     * List of sounds configured for different surfaces.
     * 
     * Presets data table info:
     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    TMap<FName, FFootstepSoundData> SurfaceSoundData;

    /**
     * List of effects configured for different surfaces.
     *
     * Presets data table info:
     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    TMap<FName, FFootstepEffectData> SurfaceEffectData;

    /**
     * List of decal effects configured for different surfaces.
     * 
     * Presets data table info:
     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    TMap<FName, FFootstepDecalData> SurfaceDecalData;

    /**
     * List of splash sounds configured for different surfaces.     
     *
     * Presets data table info:
     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    TMap<FName, FFootstepSoundData> SplashSoundData;

    /**
     * List of splash effects configured for different surfaces.
     *
     * Presets data table info:
     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    TMap<FName, FFootstepEffectData> SplashEffectData;

    /**
     * List of splash decals configured for different surfaces.
     *
     * Presets data table info:
     * If key of structure is exist in the plugin settings, it does not matter which surface type is set in the structure.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    TMap<FName, FFootstepDecalData> SplashDecalData;
};

/**
 * Footstep settings data structure.
 * Contains socket name and trace settings for playing footsteps for certain leg.
 * Contains data of sounds and effects which should be played for different footstep types and for different surfaces.
 */
USTRUCT(BlueprintType)
struct FFootstepSettings : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

public:
    FFootstepSettings() : FootSocket(), FootstepsData() {}

    /**
     * Bone or socket name of the foot for which footstep will be played.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    FName FootSocket = "foot_l";

    /**
     * Upper Z offset from FootSocket using in the check surface trace function.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    float SurfaceCheckStartOffset = 20.0f;

    /**
     * Lower Z offset from FootSocket using in the check surface trace function.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    float SurfaceCheckEndOffset = -20.0f;

    /**
     * Upper Z offset from FootSocket using in the check water trace function.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    float WaterCheckStartOffset = 100.0f;

    /**
     * Lower Z offset from FootSocket using in the check water trace function.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    float WaterCheckEndOffset = -15.0f;

    /**
     * List of footstep type settings configured for different footstep types.
     *
     * Presets data table info:
     * If type is Default then it will be used for each footstep type which is not set.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
    TMap<FName, FFootstepTypeData> FootstepsData;
};
