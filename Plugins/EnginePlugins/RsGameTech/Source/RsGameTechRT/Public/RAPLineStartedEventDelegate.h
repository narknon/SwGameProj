#pragma once
#include "CoreMinimal.h"
#include "RAPLineStartedEventData.h"
#include "RAPLineStartedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRAPLineStartedEvent, FRAPLineStartedEventData, Data);

