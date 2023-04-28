#pragma once
#include "CoreMinimal.h"
#include "RsMotionMatchKineticBaseComponent.h"
#include "RsMotionMatchKineticComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsMotionMatchKineticComponent : public URsMotionMatchKineticBaseComponent {
    GENERATED_BODY()
public:
    URsMotionMatchKineticComponent();
};

