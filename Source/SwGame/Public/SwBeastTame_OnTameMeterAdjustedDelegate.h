#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnTameMeterAdjustedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSwBeastTame_OnTameMeterAdjusted, float, NormalizedPercentage, float, NewCurrentValue, float, MaxValue, float, DeltaValue);

