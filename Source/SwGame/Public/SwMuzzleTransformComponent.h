#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SwMuzzleTransformComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwMuzzleTransformComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USwMuzzleTransformComponent();
};

