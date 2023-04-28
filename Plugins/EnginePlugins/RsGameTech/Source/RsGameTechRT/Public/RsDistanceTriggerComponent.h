#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsBaseTriggerComponent.h"
#include "RsDistanceTriggerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsDistanceTriggerComponent : public URsBaseTriggerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerDistance;
    
public:
    URsDistanceTriggerComponent();
    UFUNCTION(BlueprintCallable)
    void SetTriggerDistance(float InTriggerDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClosestPointOnTrigger(const FVector& Point, FVector& OutPointOnTrigger) const;
    
};

