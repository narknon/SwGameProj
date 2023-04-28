#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ERsAIAwarenessState.h"
#include "RsBTDecorator_CheckAwarenessState.generated.h"

class ARsAIController;

UCLASS(Blueprintable)
class URsBTDecorator_CheckAwarenessState : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIAwarenessState::Type> AwarenessState;
    
public:
    URsBTDecorator_CheckAwarenessState();
private:
    UFUNCTION(BlueprintCallable)
    void OnAwarenessStateChanged(ARsAIController* AIController, TEnumAsByte<ERsAIAwarenessState::Type> PreviousAwarenessState, TEnumAsByte<ERsAIAwarenessState::Type> NewAwarenessState);
    
};

