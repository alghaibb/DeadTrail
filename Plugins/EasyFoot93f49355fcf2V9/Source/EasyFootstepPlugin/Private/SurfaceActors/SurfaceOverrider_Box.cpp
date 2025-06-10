// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#include "SurfaceActors/SurfaceOverrider_Box.h"
#include "EasyFootstepPluginSettings.h"
#include "Components/BoxComponent.h"

/**
 * Constructor of Surface Overrider Box actor class.
 * Sets default collision settings.
 */
ASurfaceOverrider_Box::ASurfaceOverrider_Box() : Super()
{
    PrimaryActorTick.bCanEverTick = false;    

    BoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
    BoxCollision->SetupAttachment(SceneRoot);

    auto settings = GetDefault<UEasyFootstepPluginSettings>();
    TEnumAsByte<EObjectTypeQuery> SurfaceOverriderObjectType = settings->SurfaceOverriderObjectType;

    BoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    BoxCollision->SetCollisionObjectType(UEngineTypes::ConvertToCollisionChannel(SurfaceOverriderObjectType));
    BoxCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);    

    BoxCollision->SetBoxExtent(BoxExtent);
}

/**
 * Update collision component settings.
 */
void ASurfaceOverrider_Box::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    BoxCollision->SetBoxExtent(BoxExtent);
}

/**
 * Called when the game starts.
 * Sets collision settings.
 */
void ASurfaceOverrider_Box::BeginPlay()
{
    Super::BeginPlay();

    auto settings = GetDefault<UEasyFootstepPluginSettings>();
    TEnumAsByte<EObjectTypeQuery> SurfaceOverriderObjectType = settings->SurfaceOverriderObjectType;

    BoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    BoxCollision->SetCollisionObjectType(UEngineTypes::ConvertToCollisionChannel(SurfaceOverriderObjectType));
    BoxCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

    BoxCollision->SetBoxExtent(BoxExtent);
}