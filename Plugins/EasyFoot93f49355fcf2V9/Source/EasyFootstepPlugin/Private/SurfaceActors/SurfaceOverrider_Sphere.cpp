// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#include "SurfaceActors/SurfaceOverrider_Sphere.h"
#include "EasyFootstepPluginSettings.h"
#include "Components/SphereComponent.h"

/**
 * Constructor of Surface Overrider Sphere actor class.
 * Sets default collision settings.
 */
ASurfaceOverrider_Sphere::ASurfaceOverrider_Sphere() : Super()
{
    PrimaryActorTick.bCanEverTick = false;    

    SphereCollision = CreateDefaultSubobject<USphereComponent>("BoxCollision");
    SphereCollision->SetupAttachment(SceneRoot);

    auto settings = GetDefault<UEasyFootstepPluginSettings>();
    TEnumAsByte<EObjectTypeQuery> SurfaceOverriderObjectType = settings->SurfaceOverriderObjectType;

    SphereCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    SphereCollision->SetCollisionObjectType(UEngineTypes::ConvertToCollisionChannel(SurfaceOverriderObjectType));
    SphereCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);    

    SphereCollision->SetSphereRadius(SphereRadius);
}

/**
 * Update collision component settings.
 */
void ASurfaceOverrider_Sphere::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    SphereCollision->SetSphereRadius(SphereRadius);
}

/**
 * Called when the game starts.
 * Sets collision settings.
 */
void ASurfaceOverrider_Sphere::BeginPlay()
{
    Super::BeginPlay();

    auto settings = GetDefault<UEasyFootstepPluginSettings>();
    TEnumAsByte<EObjectTypeQuery> SurfaceOverriderObjectType = settings->SurfaceOverriderObjectType;

    SphereCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    SphereCollision->SetCollisionObjectType(UEngineTypes::ConvertToCollisionChannel(SurfaceOverriderObjectType));
    SphereCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

    SphereCollision->SetSphereRadius(SphereRadius);
}