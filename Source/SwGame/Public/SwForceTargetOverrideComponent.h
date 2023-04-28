#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SwForceTargetOverrideComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwForceTargetOverrideComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USwForceTargetOverrideComponent();
};

