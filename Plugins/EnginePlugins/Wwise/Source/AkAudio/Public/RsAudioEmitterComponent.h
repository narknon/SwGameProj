#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RsAudioEmitterComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAudioEmitterComponent : public USceneComponent {
    GENERATED_BODY()
public:
    URsAudioEmitterComponent();
};

