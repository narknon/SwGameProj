#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RsAudioBedComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAudioBedComponent : public USceneComponent {
    GENERATED_BODY()
public:
    URsAudioBedComponent();
};

