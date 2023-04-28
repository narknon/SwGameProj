#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RsWorldMapStaticMeshComponent.h"
#include "SwWorldMapIndicatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwWorldMapIndicatorComponent : public URsWorldMapStaticMeshComponent {
    GENERATED_BODY()
public:
    USwWorldMapIndicatorComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateIndicatorTransform(const FVector& Location, const FRotator& Rotation, bool bYawRotationOnly);
    
};

