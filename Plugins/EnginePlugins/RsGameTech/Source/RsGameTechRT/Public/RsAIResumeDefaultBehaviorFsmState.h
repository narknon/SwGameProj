#pragma once
#include "CoreMinimal.h"
#include "RsAIBehaviorState.h"
#include "RsAIResumeDefaultBehaviorFsmState.generated.h"

UCLASS(Blueprintable)
class URsAIResumeDefaultBehaviorFsmState : public URsAIBehaviorState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetHomePositionOnBeginState;
    
public:
    URsAIResumeDefaultBehaviorFsmState();
    UFUNCTION(BlueprintCallable)
    void SetResetHomePositionOnBeginState(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResetHomePositionOnBeginState() const;
    
};

