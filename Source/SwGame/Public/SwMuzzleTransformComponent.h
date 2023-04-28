#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SwMuzzleTransformComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwMuzzleTransformComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USwMuzzleTransformComponent();
};

