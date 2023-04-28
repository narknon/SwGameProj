#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RsAIPOIRenderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsAIPOIRenderComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    URsAIPOIRenderComponent();
};

