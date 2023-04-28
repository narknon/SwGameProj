#pragma once
#include "CoreMinimal.h"
#include "RsHitCountThresholdReachedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsHitCountThresholdReachedEvent, float, HitCountThreshold, float, CurrentHitCount);

