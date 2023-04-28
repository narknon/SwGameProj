#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsStateObjectMachine.h"
#include "RsAIBehaviorStateMachine.generated.h"

class ARsAIController;
class IRsBTInjectionContext;
class URsBTInjectionContext;
class UBehaviorTree;

UCLASS(Blueprintable)
class URsAIBehaviorStateMachine : public URsStateObjectMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowProceduralStatesForCustomRootBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSpawnIntroRun;
    
    URsAIBehaviorStateMachine();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_PushCustomStateForRootBehavior(ARsAIController* OwningObject, const FGameplayTag& GameplayTag, UBehaviorTree* BehaviorTree, const TScriptInterface<IRsBTInjectionContext>& InjectionContext, bool& bPushedCustomState);
    
};

