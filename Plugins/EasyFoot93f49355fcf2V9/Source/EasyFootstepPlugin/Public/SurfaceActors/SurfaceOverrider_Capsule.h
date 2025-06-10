// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#pragma once

#include "CoreMinimal.h"
#include "EasyFootstepPluginTypes.h"
#include "SurfaceActors/SurfaceOverrider.h"
#include "SurfaceOverrider_Capsule.generated.h"

class UCapsuleComponent;

/**
 * Surface overrider capsule actor class.
 * Allows to override surface type and play splash in the capsule collision volume of this actor.
 */
UCLASS()
class EASYFOOTSTEPPLUGIN_API ASurfaceOverrider_Capsule : public ASurfaceOverrider
{
    GENERATED_BODY()

public:
    /**
     * Constructor of Surface Overrider Capsule actor class.
     * Sets default collision settings.
     */
    ASurfaceOverrider_Capsule();

    /**
     * Radius of the capsule collision.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    float CapsuleRadius = 50;

    /**
     * Half height value of the capsule collision.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    float CapsuleHalfHeight = 100;

    /**
     * Update collision component settings.
     */
    virtual void OnConstruction(const FTransform& Transform) override;

protected:
    /**
     * Capsule collision component.
     */
    UPROPERTY(VisibleAnywhere, Category = "Components")
    UCapsuleComponent* CapsuleCollision;

    /**
     * Called when the game starts.
     * Sets collision settings.
     */
    virtual void BeginPlay() override;
};