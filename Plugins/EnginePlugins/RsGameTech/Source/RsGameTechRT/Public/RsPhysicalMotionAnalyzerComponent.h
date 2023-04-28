#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsPhysicalMotionAnalyzerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsPhysicalMotionAnalyzerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URsPhysicalMotionAnalyzerComponent();
};

