#pragma once
#include "CoreMinimal.h"
#include "ERsAIAwarenessReactionState.h"
#include "ERsAIAwarenessState.h"
#include "RsAIBehaviorState.h"
#include "RsAwarenessState.generated.h"

UCLASS(Blueprintable)
class URsAwarenessState : public URsAIBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIAwarenessState::Type> InstrinsicAwarenessType;
    
public:
    URsAwarenessState();
protected:
    UFUNCTION(BlueprintCallable)
    void SetAwarenessReactionState(TEnumAsByte<ERsAIAwarenessReactionState::Type> NewAwarenessReactionState);
    
};

