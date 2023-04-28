#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "RsOilMeshRenderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsOilMeshRenderComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    URsOilMeshRenderComponent();
};

