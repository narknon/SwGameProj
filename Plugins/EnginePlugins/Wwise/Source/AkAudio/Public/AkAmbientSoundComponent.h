#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkAmbientSoundComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAkAmbientSoundComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAkAmbientSoundComponent();
};

