// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Character.h"
#include "EasyFootstepPluginTypes.h"
#include "FootstepComponent.generated.h"

/**
 * The delegate that is used to send footstep data to binded functions.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnFootstepPlayed,  //
    UFootstepComponent*, FootstepComponent,                       //
    FVector, Location,                                            //
    EFootstepType, FootstepType,                                  //
    EPhysicalSurface, SurfaceType,                                //
    bool, PlaySplash);

/**
 * Footstep component class.
 * Allows to play different sounds and spawn different effects depending on footstep type and surface type when character move.
 * The Footstep settings can be set in the footstep preset data tables and can be loaded from it.
 * The footstep logic can be called with FootstepNotify from animations.
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable, DisplayName = "Footstep Component")
class EASYFOOTSTEPPLUGIN_API UFootstepComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    /**
     * Constructor of Footstep Component class.
     * Sets default values for this component's properties.
     */
    UFootstepComponent();

    /**
     * Footstep settings preset handle.
     * Can load footstep settings from footstep preset data table.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Footsteps")
    FDataTableRowHandle PresetHandle;

    /**
     * Bone or socket name of the foot for which footstep will be played.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Footsteps")
    FName FootSocket;

    /**
     * Upper Z offset from FootSocket using in the check surface trace function.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Footsteps")
    float SurfaceCheckStartOffset = 20;

    /**
     * Lower Z offset from FootSocket using in the check surface trace function.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Footsteps")
    float SurfaceCheckEndOffset = -20;

    /**
     * Upper Z offset from FootSocket using in the check water trace function.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Footsteps")
    float WaterCheckStartOffset = 100;

    /**
     * Lower Z offset from FootSocket using in the check water trace function.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Footsteps")
    float WaterCheckEndOffset = -15;

    /**
     * List of footstep type settings configured for different footstep types.
     *
     * Presets data table info:
     * If type is Default then it will be used for each footstep type which is not set.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Footsteps")
    TMap<FName, FFootstepTypeData> FootstepData;

    /**
     * Enables simple IK calculations for the foot.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|IK")
    bool IK_Enabled = false;

    /**
     * Bone or socket name of the foot for which the IK variables should be calculated.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|IK", meta = (EditCondition = "IK_Enabled"))
    FName IK_FootSocket;

    /**
     * Upper Z offset from IK_FootSocket using in the simple IK calculations.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|IK", meta = (EditCondition = "IK_Enabled"))
    float IK_TraceStartOffset = 50;

    /**
     * Lower Z offset from IK_FootSocket using in the simple IK calculations.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|IK", meta = (EditCondition = "IK_Enabled"))
    float IK_TraceEndOffset = -75;

    /**
     * The speed of interpolation for current IK bone rotation variable.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|IK", meta = (EditCondition = "IK_Enabled"))
    float IK_BoneRotationInterpSpeed = 15;

    /**
     * The speed of interpolation for current IK bone translation variable.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|IK", meta = (EditCondition = "IK_Enabled"))
    float IK_BoneTranslationInterpSpeed = 15;

    /**
     * Enables debug mode for footstep component.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Debug")
    bool DebugMode = false;

    /**
     * Enables debug mode for IK calculations of footstep component.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Debug", meta = (EditCondition = "DebugMode"))
    bool DebugIK = false;

    /**
     * The lifetime of debug traces.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Debug", meta = (EditCondition = "DebugMode"))
    float DebugTraceTime = 5;

    /**
     * The event that is called when the footstep has been played successfully.
     */
    UPROPERTY(BlueprintAssignable)
    FOnFootstepPlayed OnFootstepPlayed;

    /**
     * Called every frame.
     */
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    /**
     * Update footstep settings, if preset handle has been changed.
     * With editor only.
     */
#if WITH_EDITOR    
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

    /**
     * Override footstep preset handle and update footstep settings from the data table.
     * Can be overridden.
     *
     * @param NewHandle    New footstep preset handle.
     */
    UFUNCTION(BlueprintCallable, Category = "Default")
    virtual void SetOverriddenFootstepPreset(FDataTableRowHandle NewHandle);

    /**
     * Clear overridden preset handle and update footstep settings from the data table if default preset handle is set.
     * Can be overridden.
     */
    UFUNCTION(BlueprintCallable, Category = "Default")
    virtual void ClearOverriddenFootstepPreset();

    /**
     * Try to play footstep sounds and effects for a foot with target settings.
     * Can be overridden.
     *
     * @param InFootSocket      Bone or socket name of target foot.
     * @param FootstepType      Type of footstep.
     * @param PlaySounds        Determines if the footstep sounds should be played.
     * @param SpawnEffects      Determines if the footstep effects should be spawned.
     * @return                  Returns true if footstep has been played successfully.
     */
    UFUNCTION(BlueprintCallable, Category = "Default")
    virtual bool TryToPlayFootstep(const FName InFootSocket, const EFootstepType FootstepType, const bool PlaySounds, const bool SpawnEffects);

    /**
     * Returns the translation of the pelvis bone for a character with two legs.
     * Can be overridden.
     *
     * @param RightFootstepComponent    Footstep component for the right leg.
     * @return  Pelvis bone translation value.
     */
    UFUNCTION(BlueprintCallable, Category = "IK")
    virtual float GetTwoLegsPelvisBoneTranslation(UFootstepComponent* RightFootstepComponent);

    /**
     * Returns the translation and rotation IK variables.
     * Can be overridden.
     *
     * @param BoneTranslation       Current IK bone translation variable.
     * @param BoneRotation          Current IK bone rotation variable.
     */
    UFUNCTION(BlueprintCallable, Category = "IK", DisplayName = "Get Bone IK Variables")
    virtual void GetBoneIKVariables(float& BoneTranslation, FRotator& BoneRotation);

protected:
    /**
     * Reference to component owner character.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|References")
    ACharacter* Character;

    /**
     * Reference to skeletal mesh component of the character.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|References")
    USkeletalMeshComponent* CharacterSkeletalMesh;

    /**
     * Indicator that a footstep component has correct settings.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|Footsteps")
    bool SettingsAreCorrect;

    /**
     * Overridden footstep preset handle.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|Footsteps")
    FDataTableRowHandle OverriddenPresetHandle;

    /**
     * Target IK bone rotation variable.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|IK")
    FRotator IK_BoneTargetRotation;

    /**
     * Current IK bone rotation variable.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|IK")
    FRotator IK_BoneCurrentRotation;

    /**
     * Target IK bone translation variable.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|IK")
    float IK_BoneTargetTranslation;

    /**
     * Current IK bone translation variable.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|IK")
    float IK_BoneCurrentTranslation;

    /**
     * Called when the game starts.
     */
    virtual void BeginPlay() override;

    /**
     * Checks references and footstep settings and returns true if everything set correctly.
     * Can be overridden.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    virtual bool CheckAndUpdateSettings();

    /**
     * Check surface in foot location and get hit location, hit surface type and play splash variables.
     * Can be overridden.
     *
     * @param Location           Location of trace hit with surface.
     * @param SurfaceType        Physical surface type of hit location. This value can be overriden with SurfaceOverrider actor.
     * @param PlaySplash         Determines that footstep should play splash sounds and effects in this location. This value can be overriden with SurfaceOverrider actor.
     * @return                   Returns true, if there was a hit with surface.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    virtual bool CheckSurface(FVector& Location, TEnumAsByte<EPhysicalSurface>& SurfaceType, bool& PlaySplash);

    /**
     * Get foot location if foot socket exist.
     * Can be overridden.
     *
     * @param FootLocation       Location of the foot socket.
     * @return                   Returns true, if foot socket exist.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    virtual bool GetFootLocation(FVector& FootLocation);

    /**
     * Check surface overrider actor in target location and get overridden surface and play splash variables.
     * Can be overridden.
     *
     * @param Location           Location of the foot socket.
     * @return                   Returns true, if foot socket exist.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    virtual bool CheckOverriddenSurface(const FVector Location, TEnumAsByte<EPhysicalSurface>& SurfaceType, bool& PlaySplash);

    /**
     * Try to find footstep type data from footstep settings depending on footstep type.
     * Can be overridden.
     *
     * @param FootstepType          Type of footstep.
     * @param OutFootstepTypeData   Out footstep type data for target footstep type.
     * @return                      Returns true, if footstep type data is found.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    virtual bool FindFootstepTypeData(const EFootstepType FootstepType, FFootstepTypeData& OutFootstepTypeData);

    /**
     * Try to find sound data from footstep type data for target surface type.
     * Can be overridden.
     *
     * @param TMapData              TMap sounds data list from footstep type data.
     * @param OutData               Out sound data for target surface type.
     * @return                      Returns true, if sound data is found.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    virtual bool FindFootstepSoundData(const TMap<FName, FFootstepSoundData> TMapData, const TEnumAsByte<EPhysicalSurface> SurfaceType, FFootstepSoundData& OutData);

    /**
     * Try to find effect data from footstep type data for target surface type.
     * Can be overridden.
     *
     * @param TMapData              TMap effects data list from footstep type data.
     * @param OutData               Out effect data for target surface type.
     * @return                      Returns true, if effect data is found.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    virtual bool FindFootstepEffectData(const TMap<FName, FFootstepEffectData> TMapData, const TEnumAsByte<EPhysicalSurface> SurfaceType, FFootstepEffectData& OutData);

    /**
     * Try to find decal data from footstep type data for target surface type.
     * Can be overridden.
     *
     * @param TMapData              TMap decal data list from footstep type data.
     * @param OutData               Out decal data for target surface type.
     * @return                      Returns true, if decal data is found.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    virtual bool FindFootstepDecalData(const TMap<FName, FFootstepDecalData> TMapData, const TEnumAsByte<EPhysicalSurface> SurfaceType, FFootstepDecalData& OutData);

    /**
     * Try to play footstep sound at location.
     * Can be overridden.
     *
     * @param Location              Location that sound should be played.
     * @param FootstepTypeData      Footstep type data for different surfaces.
     * @param SurfaceType           Surface type for getting sounds from footstep type data.
     * @param PlaySplash            Determines that splash sound should be played.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    virtual void PlayFootstepSounds(const FVector Location, const FFootstepTypeData FootstepTypeData, const TEnumAsByte<EPhysicalSurface> SurfaceType, const bool PlaySplash);

    /**
     * Try to spawn footstep effects and decals at location.
     * Can be overridden.
     *
     * @param Location              Location that effects should be spawned.
     * @param FootstepTypeData      Footstep type data for different surfaces.
     * @param SurfaceType           Surface type for getting effects from footstep type data.
     * @param PlaySplash            Determines that splash effects should be spawned.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    virtual void SpawnFootstepEffects(const FVector Location, const FFootstepTypeData FootstepTypeData, const TEnumAsByte<EPhysicalSurface> SurfaceType, const bool PlaySplash);

    /**
     * Update footstep settings by target preset handle from data table.
     *
     * @param Handle                Target footstep preset data table row handle.
     * @return                      Returns true, if settings were loaded correctly.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    bool UpdateFootstepSettingsByHandle(FDataTableRowHandle Handle);

    /**
     * Calculate and update IK bone variables.
     * Can be overridden.
     */
    UFUNCTION(BlueprintCallable, Category = "Default", meta = (BlueprintProtected))
    virtual void UpdateFootIK(const float DeltaTime);
};