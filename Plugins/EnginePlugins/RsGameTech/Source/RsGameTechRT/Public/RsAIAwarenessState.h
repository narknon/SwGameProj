#pragma once
#include "CoreMinimal.h"
#include "ERsAIAwarenessReactionState.h"
#include "ERsAIAwarenessState.h"
#include "RsStateBlueprintBase.h"
#include "RsAIAwarenessState.generated.h"

class ARsAIController;

UCLASS(Blueprintable)
class URsAIAwarenessState : public URsStateBlueprintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIAwarenessState::Type> InstrinsicAwarenessType;
    
public:
    URsAIAwarenessState();
protected:
    UFUNCTION(BlueprintCallable)
    void SetAwarenessReactionState(TEnumAsByte<ERsAIAwarenessReactionState::Type> NewAwarenessReactionState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARsAIController* GetRsOwner() const;
    
};

