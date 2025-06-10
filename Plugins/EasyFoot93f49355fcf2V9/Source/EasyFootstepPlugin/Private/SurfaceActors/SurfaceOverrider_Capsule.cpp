// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#include "SurfaceActors/SurfaceOverrider_Capsule.h"
#include "EasyFootstepPluginSettings.h"
#include "Components/CapsuleComponent.h"

/**
 * Constructor of Surface Overrider Capsule actor class.
 * Sets default collision settings.
 */
ASurfaceOverrider_Capsule::ASurfaceOverrider_Capsule() : Super()
{
    PrimaryActorTick.bCanEverTick = false;

    CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>("BoxCollision");
    CapsuleCollision->SetupAttachment(SceneRoot);

    auto settings = GetDefault<UEasyFootstepPluginSettings>();
    TEnumAsByte<EObjectTypeQuery> SurfaceOverriderObjectType = settings->SurfaceOverriderObjectType;

    CapsuleCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CapsuleCollision->SetCollisionObjectType(UEngineTypes::ConvertToCollisionChannel(SurfaceOverriderObjectType));
    CapsuleCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

    CapsuleCollision->SetCapsuleHalfHeight(CapsuleHalfHeight);
    CapsuleCollision->SetCapsuleRadius(CapsuleRadius);
}

/**
 * Update collision component settings.
 */
void ASurfaceOverrider_Capsule::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    CapsuleCollision->SetCapsuleHalfHeight(CapsuleHalfHeight);
    CapsuleCollision->SetCapsuleRadius(CapsuleRadius);
}

/**
 * Called when the game starts.
 * Sets collision settings.
 */
void ASurfaceOverrider_Capsule::BeginPlay()
{
    Super::BeginPlay();

    auto settings = GetDefault<UEasyFootstepPluginSettings>();
    TEnumAsByte<EObjectTypeQuery> SurfaceOverriderObjectType = settings->SurfaceOverriderObjectType;

    CapsuleCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CapsuleCollision->SetCollisionObjectType(UEngineTypes::ConvertToCollisionChannel(SurfaceOverriderObjectType));
    CapsuleCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

    CapsuleCollision->SetCapsuleHalfHeight(CapsuleHalfHeight);
    CapsuleCollision->SetCapsuleRadius(CapsuleRadius);
}