#pragma once
#include "CoreMinimal.h"
#include "RAPLineEndedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRAPLineEndedEvent, int32, UID);

