#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ERsStepAsideState.h"
#include "SwBTDecorator_CheckStepAside.generated.h"

UCLASS(Blueprintable)
class USwBTDecorator_CheckStepAside : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsStepAsideState StepAsideState;
    
    USwBTDecorator_CheckStepAside();
};

