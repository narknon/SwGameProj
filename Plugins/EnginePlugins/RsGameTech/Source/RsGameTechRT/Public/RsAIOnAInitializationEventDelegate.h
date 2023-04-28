#pragma once
#include "CoreMinimal.h"
#include "RsAIOnAInitializationEventDelegate.generated.h"

class ARsAIController;
class URsAISystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsAIOnAInitializationEvent, URsAISystem*, AISystem, ARsAIController*, AIController);

