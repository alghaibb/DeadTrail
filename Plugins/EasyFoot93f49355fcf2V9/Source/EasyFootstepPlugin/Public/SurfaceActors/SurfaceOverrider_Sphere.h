// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#pragma once

#include "CoreMinimal.h"
#include "EasyFootstepPluginTypes.h"
#include "SurfaceActors/SurfaceOverrider.h"
#include "SurfaceOverrider_Sphere.generated.h"

class USphereComponent;

/**
 * Surface overrider sphere actor class.
 * Allows to override surface type and play splash in the capsule collision volume of this actor.
 */
UCLASS()
class EASYFOOTSTEPPLUGIN_API ASurfaceOverrider_Sphere : public ASurfaceOverrider
{
    GENERATED_BODY()

public:
    /**
     * Constructor of Surface Overrider Sphere actor class.
     * Sets default collision settings.
     */
    ASurfaceOverrider_Sphere();

    /**
     * Radius of the sphere collision.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    float SphereRadius = 100;

    /**
     * Update collision component settings.
     */
    virtual void OnConstruction(const FTransform& Transform) override;

protected:
    /**
     * Sphere collision component.
     */
    UPROPERTY(VisibleAnywhere, Category = "Components")
    USphereComponent* SphereCollision;

    /**
     * Called when the game starts.
     * Sets collision settings.
     */
    virtual void BeginPlay() override;
};
