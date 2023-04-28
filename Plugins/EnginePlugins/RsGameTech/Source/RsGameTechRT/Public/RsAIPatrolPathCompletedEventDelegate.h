#pragma once
#include "CoreMinimal.h"
#include "RsAIPatrolPathCompletedEventDelegate.generated.h"

class ARsAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsAIPatrolPathCompletedEvent, ARsAIController*, AIController);

