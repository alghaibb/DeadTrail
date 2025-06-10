// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#include "Components/FootstepComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/DataTableFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "UObject/UObjectGlobals.h"
#include "SurfaceActors/SurfaceOverrider.h"
#include "EasyFootstepPluginSettings.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstance.h"
#include "NiagaraFunctionLibrary.h"
#include "Engine/World.h"

/**
 * Special category for log of footstep component.
 */
DEFINE_LOG_CATEGORY_STATIC(Log_FootstepComponent, All, All)

/**
 * Constructor of Footstep Component class.
 * Sets default values for this component's properties.
 */
UFootstepComponent::UFootstepComponent()
{    
    PrimaryComponentTick.bCanEverTick = true;
}

/**
 * Called when the game starts.
 */
void UFootstepComponent::BeginPlay()
{
    Super::BeginPlay();

    // Set character reference.
    Character = Cast<ACharacter>(GetOwner());

    // Check that footstep settings are correct.
    SettingsAreCorrect = CheckAndUpdateSettings();
#if WITH_EDITOR
    if (!SettingsAreCorrect)
    {
        FString ClassName = GetOwner()->GetClass()->GetDisplayNameText().ToString();
        UE_LOG(Log_FootstepComponent, Warning, TEXT("Wrong initial footstep settings in the %s class!"), *ClassName);
    }
#endif
}

/**
 * Called every frame.
 */
void UFootstepComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // Calculate IK variables for foot socket.
    if (IK_Enabled)
    {
        UpdateFootIK(DeltaTime);
    }
    else
    {
        ThisTickFunction->bCanEverTick = false;
    }
}

/**
 * Update footstep settings, if preset handle has been changed.
 * With editor only.
 */
#if WITH_EDITOR
void UFootstepComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    // Try to update footstep settings from data table by new preset handle.
    UpdateFootstepSettingsByHandle(PresetHandle);

    Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

/**
 * Checks references and footstep settings and returns true if everything set correctly.
 * Can be overridden.
 */
bool UFootstepComponent::CheckAndUpdateSettings()
{
    if (Character)
    {
        CharacterSkeletalMesh = Character->GetMesh();

        FDataTableRowHandle LocalHandle = PresetHandle;

        // Select overridden preset handle, if it is set.
        if (OverriddenPresetHandle.DataTable && OverriddenPresetHandle.RowName != NAME_None) LocalHandle = OverriddenPresetHandle;

        // Try to update footstep settings by preset handle from the data table.
        UpdateFootstepSettingsByHandle(LocalHandle);

        // Returns false, if FootSocket is not set.
        if (FootSocket == NAME_None)
        {
            UE_LOG(Log_FootstepComponent, Warning, TEXT("Foot socket should be set in the footstep component!"));
            return false;
        }

        // Returns false, if FootSocket is not exist in the character mesh.
        if (!CharacterSkeletalMesh->DoesSocketExist(FootSocket))
        {
            UE_LOG(Log_FootstepComponent, Warning, TEXT("Character does not have bone with name %s!"), *FootSocket.ToString());
            return false;
        }
    }
    else
    {
        // Returns false, if character reference is not exist, print warning log message.
        UE_LOG(Log_FootstepComponent, Warning, TEXT("Footstep component should be added to the character!"));
        return false;
    }

    // Returns true, if everything is correct.
    return true;
}

/**
 * Override footstep preset handle and update footstep settings from the data table.
 * Can be overridden.
 *
 * @param NewHandle    New footstep preset handle.
 */
void UFootstepComponent::SetOverriddenFootstepPreset(FDataTableRowHandle NewHandle)
{
    // Override preset handle.
    OverriddenPresetHandle = NewHandle;
    // Try to update footstep settings and check that footstep settings are correct.
    SettingsAreCorrect = CheckAndUpdateSettings();
#if WITH_EDITOR
    if (!SettingsAreCorrect)
    {
        FString ClassName = GetOwner()->GetClass()->GetDisplayNameText().ToString();
        UE_LOG(Log_FootstepComponent, Warning, TEXT("Wrong footstep settings in the %s class!"), *ClassName);

    }
#endif
}

/**
 * Clear overridden preset handle and update footstep settings from the data table if default preset handle is set.
 * Can be overridden.
 */
void UFootstepComponent::ClearOverriddenFootstepPreset()
{
    // Reset preset handle.
    OverriddenPresetHandle.DataTable = nullptr;
    OverriddenPresetHandle.RowName = NAME_None;
    // Try to update footstep settings and check that footstep settings are correct.
    SettingsAreCorrect = CheckAndUpdateSettings();
#if WITH_EDITOR
    if (!SettingsAreCorrect)
    {
        FString ClassName = GetOwner()->GetClass()->GetDisplayNameText().ToString();
        UE_LOG(Log_FootstepComponent, Warning, TEXT("Wrong footstep settings in the %s class!"), *ClassName);
    }
#endif
}

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
bool UFootstepComponent::TryToPlayFootstep(const FName InFootSocket, const EFootstepType FootstepType, const bool PlaySounds, const bool SpawnEffects)
{
    // Returns false, if sockets are bot equal.
    if (InFootSocket != FootSocket) return false;

    // Returns false, if settings are not correct.
    if (!SettingsAreCorrect) return false;

    // Get surface hit variables.
    FVector Location;
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    bool PlaySplash;
    if (!CheckSurface(Location, SurfaceType, PlaySplash)) return false;

    // Find footstep type data depending on footstep type.
    FFootstepTypeData FootstepTypeData;
    if (!FindFootstepTypeData(FootstepType, FootstepTypeData)) return false;

    // Try to play sounds in hit location.
    if (PlaySounds) PlayFootstepSounds(Location, FootstepTypeData, SurfaceType, PlaySplash);

    // Try to spawn effects in hit location.
    if (SpawnEffects) SpawnFootstepEffects(Location, FootstepTypeData, SurfaceType, PlaySplash);

    // Call delegate that footstep has been played successfully.
    OnFootstepPlayed.Broadcast(this, Location, FootstepType, SurfaceType, PlaySplash);

    return true;
}

/**
 * Check surface in foot location and get hit location, hit surface type and play splash variables.
 * Can be overridden.
 *
 * @param Location           Location of trace hit with surface.
 * @param SurfaceType        Physical surface type of hit location. This value can be overriden with SurfaceOverrider actor.
 * @param PlaySplash         Determines that footstep should play splash sounds and effects in this location. This value can be overriden with SurfaceOverrider actor.
 * @return                   Returns true, if there was a hit with surface.
 */
bool UFootstepComponent::CheckSurface(FVector& Location, TEnumAsByte<EPhysicalSurface>& SurfaceType, bool& PlaySplash)
{
    // Returns false, if foot location can't be found.
    if (!GetFootLocation(Location)) return false;
    
    // Try to find surface type under foot.
    FVector TraceStart = Location + FVector(0, 0, SurfaceCheckStartOffset);
    FVector TraceEnd = Location + FVector(0, 0, SurfaceCheckEndOffset);
    EDrawDebugTrace::Type DrawDebugTraceMode = DebugMode ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None;
    FHitResult HitResult;
    bool TraceResult = UKismetSystemLibrary::LineTraceSingle(GetWorld(),  //
        TraceStart,                                                       //
        TraceEnd,                                                         //
        ETraceTypeQuery::TraceTypeQuery1,                                 //
        false,                                                            //
        {GetOwner()},                                                     //
        DrawDebugTraceMode, HitResult, true, FLinearColor::Red, FLinearColor::Green, DebugTraceTime);

    // Returns false, if there was no hit with surface.
    if (!TraceResult) return false;

    SurfaceType = HitResult.PhysMaterial.Get()->SurfaceType;
    Location = HitResult.Location;

    // Try to find surface overrider and override surface type.
    if (!CheckOverriddenSurface(Location, SurfaceType, PlaySplash))
    {
        auto PluginSettings = GetDefault<UEasyFootstepPluginSettings>();
        TEnumAsByte<EObjectTypeQuery> WaterTraceQuery = PluginSettings->WaterObjectType;

        TraceStart = Location + FVector(0, 0, WaterCheckStartOffset);
        TraceEnd = Location + FVector(0, 0, WaterCheckEndOffset);
        
        PlaySplash = UKismetSystemLibrary::LineTraceSingleForObjects(GetWorld(),  //
            TraceStart,                                                           //
            TraceEnd,                                                             //
            {WaterTraceQuery},                                                    //
            false,                                                                //
            {},                                                                   //
            DrawDebugTraceMode, HitResult, true, FLinearColor::Blue, FLinearColor::Black, DebugTraceTime);
    }

    // Returns true, if there was a hit with surface.
    return true;
}

/**
 * Update footstep settings by target preset handle from data table.
 *
 * @param Handle                Target footstep preset data table row handle.
 * @return                      Returns true, if settings were loaded correctly.
 */
bool UFootstepComponent::UpdateFootstepSettingsByHandle(FDataTableRowHandle Handle)
{
    // Check that preset handle is exist.
    if (Handle.DataTable && Handle.RowName != NAME_None)
    {
        // Load footstep settings from data table.
        FFootstepSettings* RowStruct = Handle.DataTable->FindRow<FFootstepSettings>(Handle.RowName, "", false);
        // If they were loaded correctly, update footstep settings. 
        if (RowStruct)
        {
            FootSocket = RowStruct->FootSocket;
            SurfaceCheckStartOffset = RowStruct->SurfaceCheckStartOffset;
            SurfaceCheckEndOffset = RowStruct->SurfaceCheckEndOffset;
            WaterCheckStartOffset = RowStruct->WaterCheckStartOffset;
            WaterCheckEndOffset = RowStruct->WaterCheckEndOffset;
            FootstepData = RowStruct->FootstepsData;

            //Returns true, if settings were loaded correctly.
            return true;
        }
    }

    // Returns false, if handle is wrong.
    return false;
}

/**
 * Get foot location if foot socket exist.
 * Can be overridden.
 *
 * @param FootLocation       Location of the foot socket.
 * @return                   Returns true, if foot socket exist.
 */
bool UFootstepComponent::GetFootLocation(FVector& FootLocation)
{
    // Returns foot location, if settings are correct. 
    FootLocation = SettingsAreCorrect ? Character->GetMesh()->GetSocketTransform(FootSocket).GetLocation() : FVector::ZeroVector;

    return SettingsAreCorrect;
}

/**
 * Check surface overrider actor in target location and get overridden surface and play splash variables.
 * Can be overridden.
 *
 * @param Location           Location of the foot socket.
 * @return                   Returns true, if foot socket exist.
 */
bool UFootstepComponent::CheckOverriddenSurface(const FVector Location, TEnumAsByte<EPhysicalSurface>& SurfaceType, bool& PlaySplash)
{
    if (!GetWorld()) return false;

    // Try to hit surface overrider actor in target location.
    auto PluginSettings = GetDefault<UEasyFootstepPluginSettings>();
    TEnumAsByte<EObjectTypeQuery> OverriderTraceQuery = PluginSettings->SurfaceOverriderObjectType;
    EDrawDebugTrace::Type DrawDebugTraceMode = DebugMode ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None;
    TArray<FHitResult> OutHitResults;
    bool TraceResult = UKismetSystemLibrary::SphereTraceMultiForObjects(GetWorld(),  //
        Location,                                                                    //
        Location,                                                                    //
        1,                                                                           //
        {OverriderTraceQuery},                                                       //
        false,                                                                       //
        {},                                                                          //
        DrawDebugTraceMode, OutHitResults, true, FLinearColor::Yellow, FLinearColor::Yellow, DebugTraceTime);

    // If there was a hit.
    if (TraceResult)
    {
        FHitResult HitResult = OutHitResults[0];

        // Check that hit actor is surface overrider.
        ASurfaceOverrider* SurfaceOverrider = Cast<ASurfaceOverrider>(HitResult.GetActor());
        if (SurfaceOverrider)
        {
            // Override surface type and play splash variables.
            SurfaceType = SurfaceOverrider->SurfaceType;
            PlaySplash = SurfaceOverrider->PlaySplash;
            return true;
        }
        return false;
    }

    return false;
}

/**
 * Try to find footstep type data from footstep settings depending on footstep type.
 * Can be overridden.
 *
 * @param FootstepType          Type of footstep.
 * @param OutFootstepTypeData   Out footstep type data for target footstep type.
 * @return                      Returns true, if footstep type data is found.
 */
bool UFootstepComponent::FindFootstepTypeData(const EFootstepType FootstepType, FFootstepTypeData& OutFootstepTypeData)
{
    FFootstepTypeData DefaultFootstepTypeData;
    bool DefaultDataFound = false;

    // Try to find footstep type data by footstep type.
    for (auto SingleFootstepData : FootstepData)
    {
        // Returns footstep type data, if types are equal.
        if (SingleFootstepData.Value.FootstepType == FootstepType)
        {
            OutFootstepTypeData = SingleFootstepData.Value;
            return true;
        }

        // If key is Default, set footstep data as default.
        if (SingleFootstepData.Key == "Default")
        {
            DefaultFootstepTypeData = SingleFootstepData.Value;
            DefaultDataFound = true;
        }
    }

    // Returns default footstep type data, if it was found.
    if (DefaultDataFound)
    {
        OutFootstepTypeData = DefaultFootstepTypeData;
        return true;
    }

    // Returns false, if footstep data was not found.
    return false;
}

/**
 * Try to find sound data from footstep type data for target surface type.
 * Can be overridden.
 *
 * @param TMapData              TMap sounds data list from footstep type data.
 * @param OutData               Out sound data for target surface type.
 * @return                      Returns true, if sound data is found.
 */
bool UFootstepComponent::FindFootstepSoundData(const TMap<FName, FFootstepSoundData> TMapData, const TEnumAsByte<EPhysicalSurface> SurfaceType, FFootstepSoundData& OutData)
{
    bool DefaultDataFound = false;

    // Returns sound data, if it was found by the key and surface type in plugin settings.
    auto PluginSettings = GetDefault<UEasyFootstepPluginSettings>();
    for (auto NamedSurfacePair : PluginSettings->SurfaceTypes)
    {
        if (NamedSurfacePair.Value == SurfaceType)
        {
            FName NamedSurfaceType = NamedSurfacePair.Key;
            if (NamedSurfaceType != NAME_None)
            {
                if (TMapData.Contains(NamedSurfaceType))
                {
                    OutData = TMapData.FindRef(NamedSurfaceType);
                    return true;
                }
            }
        }
    }

    // Try to find sound data by surface type.
    for (auto SingleData : TMapData)
    {
        // Returns sound data, if it was found by surface type.
        if (SingleData.Value.SurfaceType == SurfaceType)
        {
            OutData = SingleData.Value;
            return true;
        }

        // If key is Default, set sound data as default. 
        if (SingleData.Key == "Default")
        {
            OutData = SingleData.Value;
            DefaultDataFound = true;
        }
    }

    // Returns default sound data, if it was found.
    if (DefaultDataFound) return true;

    // Returns false, if sound data was not found.
    return false;
}

/**
 * Try to find effect data from footstep type data for target surface type.
 * Can be overridden.
 *
 * @param TMapData              TMap effects data list from footstep type data.
 * @param OutData               Out effect data for target surface type.
 * @return                      Returns true, if effect data is found.
 */
bool UFootstepComponent::FindFootstepEffectData(const TMap<FName, FFootstepEffectData> TMapData, const TEnumAsByte<EPhysicalSurface> SurfaceType, FFootstepEffectData& OutData)
{
    bool DefaultDataFound = false;

    // Returns effects data, if it was found by the key and surface type in plugin settings.
    auto PluginSettings = GetDefault<UEasyFootstepPluginSettings>();
    for (auto NamedSurfacePair : PluginSettings->SurfaceTypes)
    {
        if (NamedSurfacePair.Value == SurfaceType)
        {
            FName NamedSurfaceType = NamedSurfacePair.Key;
            if (NamedSurfaceType != NAME_None)
            {
                if (TMapData.Contains(NamedSurfaceType))
                {
                    OutData = TMapData.FindRef(NamedSurfaceType);
                    return true;
                }
            }
        }
    }

    // Try to find effects data by surface type.
    for (auto SingleData : TMapData)
    {
        // Returns effects data, if it was found by surface type.
        if (SingleData.Value.SurfaceType == SurfaceType)
        {
            OutData = SingleData.Value;
            return true;
        }

        // If key is Default, set effects data as default.
        if (SingleData.Key == "Default")
        {
            OutData = SingleData.Value;
            DefaultDataFound = true;
        }
    }

    // Returns default effects data, if it was found.
    if (DefaultDataFound) return true;

    // Returns false, if effects data was not found.
    return false;
}

/**
 * Try to find decal data from footstep type data for target surface type.
 * Can be overridden.
 *
 * @param TMapData              TMap decal data list from footstep type data.
 * @param OutData               Out decal data for target surface type.
 * @return                      Returns true, if decal data is found.
 */
bool UFootstepComponent::FindFootstepDecalData(const TMap<FName, FFootstepDecalData> TMapData, const TEnumAsByte<EPhysicalSurface> SurfaceType, FFootstepDecalData& OutData)
{
    bool DefaultDataFound = false;

    // Returns decal data, if it was found by the key and surface type in plugin settings.
    auto PluginSettings = GetDefault<UEasyFootstepPluginSettings>();
    for (auto NamedSurfacePair : PluginSettings->SurfaceTypes)
    {
        if (NamedSurfacePair.Value == SurfaceType)
        {
            FName NamedSurfaceType = NamedSurfacePair.Key;
            if (NamedSurfaceType != NAME_None)
            {
                if (TMapData.Contains(NamedSurfaceType))
                {
                    OutData = TMapData.FindRef(NamedSurfaceType);
                    return true;
                }
            }
        }
    }

    // Try to find decal data by surface type.
    for (auto SingleData : TMapData)
    {
        // Returns decal data, if it was found by surface type.
        if (SingleData.Value.SurfaceType == SurfaceType)
        {
            OutData = SingleData.Value;
            return true;
        }

        // If key is Default, set decal data as default.
        if (SingleData.Value.SurfaceType == EPhysicalSurface::SurfaceType_Default)
        {
            OutData = SingleData.Value;
            DefaultDataFound = true;
        }
    }

    // Returns default decal data, if it was found.
    if (DefaultDataFound) return true;

    // Returns false, if decal data was not found.
    return false;
}

/**
 * Try to play footstep sound at location.
 * Can be overridden.
 *
 * @param Location              Location that sound should be played.
 * @param FootstepTypeData      Footstep type data for different surfaces.
 * @param SurfaceType           Surface type for getting sounds from footstep type data.
 * @param PlaySplash            Determines that splash sound should be played.
 */
void UFootstepComponent::PlayFootstepSounds(const FVector Location, const FFootstepTypeData FootstepTypeData, const TEnumAsByte<EPhysicalSurface> SurfaceType, const bool PlaySplash)
{
    if (!GetWorld()) return;

    // Try to find and play surface sound.
    FFootstepSoundData SurfaceSoundData;
    if (FindFootstepSoundData(FootstepTypeData.SurfaceSoundData, SurfaceType, SurfaceSoundData))
    {
        if (SurfaceSoundData.Sound)
        {
            float VolumeMultiplier = PlaySplash ? 0.5 : 1;
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), SurfaceSoundData.Sound, Location, VolumeMultiplier);
        }
    }

    // Try to find and play splash surface sound.
    FFootstepSoundData SplashSoundData;
    if (PlaySplash && FindFootstepSoundData(FootstepTypeData.SplashSoundData, SurfaceType, SplashSoundData))
    {
        if (SplashSoundData.Sound)
        {
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), SplashSoundData.Sound, Location);
        }
    }
}

/**
 * Try to spawn footstep effects and decals at location.
 * Can be overridden.
 *
 * @param Location              Location that effects should be spawned.
 * @param FootstepTypeData      Footstep type data for different surfaces.
 * @param SurfaceType           Surface type for getting effects from footstep type data.
 * @param PlaySplash            Determines that splash effects should be spawned.
 */
void UFootstepComponent::SpawnFootstepEffects(const FVector Location, const FFootstepTypeData FootstepTypeData, const TEnumAsByte<EPhysicalSurface> SurfaceType, const bool PlaySplash)
{
    if (!GetWorld()) return;

    // Splash effects
    if (PlaySplash)
    {
        // Try to find ans spawn splash effects. 
        FFootstepEffectData SplashEffectData;
        if (FindFootstepEffectData(FootstepTypeData.SplashEffectData, SurfaceType, SplashEffectData))
        {
            // Spawn splash particle system effect.
            if (SplashEffectData.ParticleSystem)
            {
                FTransform SpawnTransform = FTransform();
                SpawnTransform.SetLocation(Location);
                UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SplashEffectData.ParticleSystem, SpawnTransform);
            }

            // Spawn splash niagara system effect.
            if (SplashEffectData.NiagaraSystem)
            {
                UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), SplashEffectData.NiagaraSystem, Location);
            }
        }

        // Try to find ans spawn splash decal. 
        FFootstepDecalData SplashDecalData;
        if (FindFootstepDecalData(FootstepTypeData.SplashDecalData, SurfaceType, SplashDecalData))
        {
            if (SplashDecalData.DecalMaterial)
            {
                FRotator Rotation = FRotator(-90, Character->GetActorRotation().Yaw, 90);
                UGameplayStatics::SpawnDecalAtLocation(GetWorld(), SplashDecalData.DecalMaterial, SplashDecalData.DecalSize, Location, Rotation, SplashDecalData.DecalLifeSpan);
            }
        }
    }
    else
    {
        // Try to find ans spawn surface effects. 
        FFootstepEffectData SurfaceEffectData;
        if (FindFootstepEffectData(FootstepTypeData.SurfaceEffectData, SurfaceType, SurfaceEffectData))
        {
            // Spawn surface particle system effect.
            if (SurfaceEffectData.ParticleSystem)
            {
                FTransform SpawnTransform = FTransform();
                SpawnTransform.SetLocation(Location);
                UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SurfaceEffectData.ParticleSystem, SpawnTransform);
            }

            // Spawn surface niagara system effect.
            if (SurfaceEffectData.NiagaraSystem)
            {
                UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), SurfaceEffectData.NiagaraSystem, Location);
            }
        }

        // Try to find ans spawn surface decal.
        FFootstepDecalData SurfaceDecalData;
        if (FindFootstepDecalData(FootstepTypeData.SurfaceDecalData, SurfaceType, SurfaceDecalData))
        {
            if (SurfaceDecalData.DecalMaterial)
            {
                FRotator Rotation = FRotator(-90, Character->GetActorRotation().Yaw, 90);
                UGameplayStatics::SpawnDecalAtLocation(GetWorld(), SurfaceDecalData.DecalMaterial, SurfaceDecalData.DecalSize, Location, Rotation, SurfaceDecalData.DecalLifeSpan);
            }
        }
    }
}

/**
 * Calculate and update IK bone variables.
 * Can be overridden.
 */
void UFootstepComponent::UpdateFootIK(const float DeltaTime)
{
    // If settings are correct.
    if (SettingsAreCorrect)
    {
        // Try to hit surface.
        FVector FootSocketLocation = CharacterSkeletalMesh->GetSocketLocation(FootSocket);
        FVector MeshLocation = CharacterSkeletalMesh->GetComponentLocation();

        FVector TraceStart = FVector(FootSocketLocation.X, FootSocketLocation.Y, MeshLocation.Z + IK_TraceStartOffset);
        FVector TraceEnd = FVector(FootSocketLocation.X, FootSocketLocation.Y, MeshLocation.Z + IK_TraceEndOffset);

        EDrawDebugTrace::Type DrawDebugTraceMode = (DebugMode && DebugIK) ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None;

        FHitResult HitResult;
        bool TraceResult = UKismetSystemLibrary::LineTraceSingle(GetWorld(),  //
            TraceStart,                                                       //
            TraceEnd,                                                         //
            ETraceTypeQuery::TraceTypeQuery1,                                 //
            false,                                                            //
            {GetOwner()},                                                     //
            DrawDebugTraceMode, HitResult, true, FLinearColor::Red, FLinearColor::Green, DebugTraceTime);

        // If there was a hit.
        if (TraceResult)
        {
            // Calculate target IK bone variables.
            float TargetPitch = UKismetMathLibrary::FClamp(UKismetMathLibrary::DegAtan2(HitResult.Normal.X, HitResult.Normal.Z), -30, 30) * -1;
            float TargetRoll = UKismetMathLibrary::FClamp(UKismetMathLibrary::DegAtan2(HitResult.Normal.Y, HitResult.Normal.Z), -10, 10);
            IK_BoneTargetRotation = FRotator(TargetPitch, 0, TargetRoll);

            IK_BoneTargetTranslation = UKismetMathLibrary::FClamp(HitResult.Location.Z - MeshLocation.Z, -30, 20);
        }
        else
        {
            // Reset target IK bone variables.
            IK_BoneTargetRotation = FRotator(0, 0, 0);
            IK_BoneTargetTranslation = 0;
        }

        // Update current IK bone variables.
        IK_BoneCurrentRotation = UKismetMathLibrary::RInterpTo(IK_BoneCurrentRotation, IK_BoneTargetRotation, DeltaTime, IK_BoneRotationInterpSpeed);
        IK_BoneCurrentTranslation = UKismetMathLibrary::FInterpTo(IK_BoneCurrentTranslation, IK_BoneTargetTranslation, DeltaTime, IK_BoneTranslationInterpSpeed);
    }
}

/**
 * Returns the translation of the pelvis bone for a character with two legs.
 * Can be overridden.
 *
 * @param RightFootstepComponent    Footstep component for the right leg.
 * @return                          Pelvis bone translation value.
 */
float UFootstepComponent::GetTwoLegsPelvisBoneTranslation(UFootstepComponent* RightFootstepComponent)
{
    if (RightFootstepComponent)
    {
        if (IK_BoneCurrentTranslation > RightFootstepComponent->IK_BoneCurrentTranslation)
        {
            return RightFootstepComponent->IK_BoneCurrentTranslation;
        }
        else
        {
            return IK_BoneCurrentTranslation;
        }
    }

    return 0;
}

/**
 * Returns the translation and rotation IK variables.
 * Can be overridden.
 *
 * @param BoneTranslation       Current IK bone translation variable.
 * @param BoneRotation          Current IK bone rotation variable.
 */
void UFootstepComponent::GetBoneIKVariables(float& BoneTranslation, FRotator& BoneRotation)
{
    BoneTranslation = IK_BoneCurrentTranslation;
    BoneRotation = IK_BoneCurrentRotation;
}
