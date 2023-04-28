#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsBaseTriggerComponent.h"
#include "RsBoxDistanceTriggerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsBoxDistanceTriggerComponent : public URsBaseTriggerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
public:
    URsBoxDistanceTriggerComponent();
    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClosestPointOnTrigger(const FVector& Point, FVector& OutPointOnTrigger) const;
    
};

