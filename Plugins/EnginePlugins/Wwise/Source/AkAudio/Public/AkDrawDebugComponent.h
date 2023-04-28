#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkDrawDebugComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAkDrawDebugComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAkDrawDebugComponent();
};

