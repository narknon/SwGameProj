#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "RsOilMeshDebugRenderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsOilMeshDebugRenderComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    URsOilMeshDebugRenderComponent();
};

