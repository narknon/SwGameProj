#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RsPhysicalAnimationVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsPhysicalAnimationVisualizerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    URsPhysicalAnimationVisualizerComponent();
};

