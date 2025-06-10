// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#pragma once

#include "CoreMinimal.h"
#include "EasyFootstepPluginTypes.h"
#include "SurfaceActors/SurfaceOverrider.h"
#include "SurfaceOverrider_Box.generated.h"

class UBoxComponent;

/**
 * Surface overrider box actor class.
 * Allows to override surface type and play splash in the box collision volume of this actor.
 */
UCLASS()
class EASYFOOTSTEPPLUGIN_API ASurfaceOverrider_Box : public ASurfaceOverrider
{
    GENERATED_BODY()

public:
    /**
     * Constructor of Surface Overrider Box actor class.
     * Sets default collision settings.
     */
    ASurfaceOverrider_Box();

    /**
     * Extent of the box collision.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    FVector BoxExtent = FVector(100, 100, 100);

    /**
     * Update collision component settings.
     */
    virtual void OnConstruction(const FTransform& Transform) override;

protected:
    /**
     * Box collision component.
     */
    UPROPERTY(VisibleAnywhere, Category = "Components")
    UBoxComponent* BoxCollision;

    /**
     * Called when the game starts.
     * Sets collision settings.
     */
    virtual void BeginPlay() override;
};