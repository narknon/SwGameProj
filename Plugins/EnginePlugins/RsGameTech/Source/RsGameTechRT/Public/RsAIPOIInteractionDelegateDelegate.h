#pragma once
#include "CoreMinimal.h"
#include "RsAIPOIInteractionDelegateDelegate.generated.h"

class ARsAIController;
class ARsAIPOI;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsAIPOIInteractionDelegate, ARsAIPOI*, POI, ARsAIController*, AIController);

