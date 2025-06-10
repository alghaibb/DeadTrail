// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#include "SurfaceActors/SurfaceOverrider.h"

/**
 * Constructor of Surface Overrider actor.
 * Sets default values.
 */
ASurfaceOverrider::ASurfaceOverrider()
{
    PrimaryActorTick.bCanEverTick = false;

    SceneRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");
    SetRootComponent(SceneRoot);
}

/**
 * Called when the game starts or when spawned.
 */
void ASurfaceOverrider::BeginPlay()
{
    Super::BeginPlay();
}