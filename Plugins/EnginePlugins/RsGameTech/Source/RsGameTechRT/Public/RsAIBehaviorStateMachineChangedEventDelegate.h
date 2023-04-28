#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RsAIBehaviorStateMachineChangedEventDelegate.generated.h"

class AActor;
class ARsAIController;
class URsAIBehaviorStateMachine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRsAIBehaviorStateMachineChangedEvent, ARsAIController*, AIController, AActor*, Actor, TSubclassOf<URsAIBehaviorStateMachine>, PreviousBehaviorStateMachineAsset, TSubclassOf<URsAIBehaviorStateMachine>, NewBehaviorStateMachineAsset);

