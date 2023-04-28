#pragma once
#include "CoreMinimal.h"
#include "RsOnSwingBeamDirectionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsOnSwingBeamDirectionChanged, bool, bIsMovingForward);

