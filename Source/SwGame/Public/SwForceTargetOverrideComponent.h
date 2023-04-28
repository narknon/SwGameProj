#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SwForceTargetOverrideComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwForceTargetOverrideComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USwForceTargetOverrideComponent();
};

