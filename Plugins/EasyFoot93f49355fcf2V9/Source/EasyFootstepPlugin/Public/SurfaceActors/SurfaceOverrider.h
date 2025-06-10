// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EasyFootstepPluginTypes.h"
#include "SurfaceOverrider.generated.h"

class USceneComponent;

/**
 * Surface overrider actor class.
 * Abstract class. 
 * Used for creating surface overrider classes with volumes.
 */
UCLASS(abstract)
class EASYFOOTSTEPPLUGIN_API ASurfaceOverrider : public AActor
{
    GENERATED_BODY()

public:
    /**
     * Constructor of Surface Overrider actor class.
     * Sets default values.
     */
    ASurfaceOverrider();

    /**
     * Override surface type in the volume of the actor.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    TEnumAsByte<EPhysicalSurface> SurfaceType;

    /**
     * Override play splash effects in the volume of the actor.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    bool PlaySplash;

protected:
    /**
     * Default scene root of the actor.
     */
    UPROPERTY(VisibleAnywhere, Category = "Components")
    USceneComponent* SceneRoot;

    /**
     * Called when the game starts or when spawned.
     */
    virtual void BeginPlay() override;
};