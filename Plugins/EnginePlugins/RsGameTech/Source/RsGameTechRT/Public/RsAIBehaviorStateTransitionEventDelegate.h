#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RsAIBehaviorStateTransitionEventDelegate.generated.h"

class AActor;
class ARsAIController;
class URsAIBehaviorState;
class URsAIBehaviorStateMachine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FRsAIBehaviorStateTransitionEvent, ARsAIController*, AIController, AActor*, Actor, TSubclassOf<URsAIBehaviorStateMachine>, CurrentBehaviorStateMachineAsset, URsAIBehaviorState*, PreviousBehaviorState, URsAIBehaviorState*, NewBehaviorState);

