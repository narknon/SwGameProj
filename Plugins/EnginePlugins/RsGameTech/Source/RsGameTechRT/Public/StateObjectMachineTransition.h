#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StateObjectMachineTransition.generated.h"

class URsSoftStateObject;

UCLASS(Blueprintable)
class UStateObjectMachineTransition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Priority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunOnEndOnBeginForPreEval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TransitionFunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TransitionActionFunctionName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSoftStateObject* NextStateTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutomaticRuleTransition;
    
public:
    UStateObjectMachineTransition();
    UFUNCTION(BlueprintCallable)
    void K2_OnTransition(UObject* OwnerObject, URsSoftStateObject* NewState, URsSoftStateObject* PreviousState);
    
    UFUNCTION(BlueprintCallable)
    bool K2_EvaluateTransition(UObject* OwnerObject);
    
};

