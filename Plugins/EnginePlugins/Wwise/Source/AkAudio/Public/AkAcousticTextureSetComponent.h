#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkAcousticTextureSetComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAkAcousticTextureSetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAkAcousticTextureSetComponent();
};

