#pragma once
#include "CoreMinimal.h"
#include "RsAISpawnIntroCompletedEventDelegate.generated.h"

class ARsAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsAISpawnIntroCompletedEvent, ARsAIController*, AIController);

