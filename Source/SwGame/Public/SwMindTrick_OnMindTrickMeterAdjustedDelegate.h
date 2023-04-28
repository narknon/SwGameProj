#pragma once
#include "CoreMinimal.h"
#include "SwMindTrick_OnMindTrickMeterAdjustedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSwMindTrick_OnMindTrickMeterAdjusted, float, NormalizedPercentage, float, NewCurrentValue, float, MaxValue, float, DeltaValue);

