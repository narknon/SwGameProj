#pragma once
#include "CoreMinimal.h"
#include "RsAIWakeStateChangedEventDelegate.generated.h"

class ARsAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsAIWakeStateChangedEvent, ARsAIController*, AIController, bool, bAwake);

