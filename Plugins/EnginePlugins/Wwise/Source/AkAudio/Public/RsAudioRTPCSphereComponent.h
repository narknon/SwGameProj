#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RsAudioRTPCSphereComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAudioRTPCSphereComponent : public USceneComponent {
    GENERATED_BODY()
public:
    URsAudioRTPCSphereComponent();
};

