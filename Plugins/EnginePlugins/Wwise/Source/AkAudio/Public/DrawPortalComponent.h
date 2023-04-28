#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "DrawPortalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDrawPortalComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDrawPortalComponent();
};

