#pragma once
#include "CoreMinimal.h"
#include "BehaviorStateMachineTemplateTransitionEvaluateDelegateDelegate.generated.h"

class ARsAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FBehaviorStateMachineTemplateTransitionEvaluateDelegate, ARsAIController*, AIController);

