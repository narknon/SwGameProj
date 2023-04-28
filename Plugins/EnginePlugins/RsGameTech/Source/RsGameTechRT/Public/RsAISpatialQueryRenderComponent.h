#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RsAISpatialQueryRenderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAISpatialQueryRenderComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    URsAISpatialQueryRenderComponent();
};

