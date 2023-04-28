#pragma once
#include "CoreMinimal.h"
#include "RsAIScreenStatusChangedEventDelegate.generated.h"

class ARsAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsAIScreenStatusChangedEvent, ARsAIController*, AIController, bool, bIsOnScreen);

