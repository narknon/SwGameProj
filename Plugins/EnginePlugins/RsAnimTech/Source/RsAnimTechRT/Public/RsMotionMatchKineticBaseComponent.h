#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsMotionMatchKineticBaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsMotionMatchKineticBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URsMotionMatchKineticBaseComponent();
};

