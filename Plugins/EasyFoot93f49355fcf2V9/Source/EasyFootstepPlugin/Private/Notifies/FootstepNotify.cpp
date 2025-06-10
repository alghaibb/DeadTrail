// Copyright Easy Systems, ltd. 2022. All Rights Reserved.
// https://www.unrealengine.com/marketplace/profile/Easy+Systems

#include "Notifies/FootstepNotify.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"

class UFootstepComponent;

void UFootstepNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    Super::Notify(MeshComp, Animation, EventReference);

    if (!MeshComp || !MeshComp->GetOwner()) return;

    // Try to play footstep for each footstep components of the character.
    // If FootSocket of the footstep component equals FootSocket of the notify then footstep will be played.
    TArray<UActorComponent*> ActorComponents;
    MeshComp->GetOwner()->GetComponents(UFootstepComponent::StaticClass(), ActorComponents);
    for (auto ActorComponent : ActorComponents)
    {
        auto FootstepComponent = Cast<UFootstepComponent>(ActorComponent);
        FootstepComponent->TryToPlayFootstep(FootSocket, FootstepType, PlaySounds, SpawnEffects);
    }

    // Play footstep preview sound in editor.
#if WITH_EDITORONLY_DATA
    UWorld* World = MeshComp->GetWorld();
    if (World && World->WorldType == EWorldType::EditorPreview)
    {
        UGameplayStatics::PlaySound2D(World, PreviewSound);
    }
#endif
}
