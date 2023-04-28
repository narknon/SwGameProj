#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "SwForceHighlightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwForceHighlightComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    USwForceHighlightComponent();
    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent);
    
};

