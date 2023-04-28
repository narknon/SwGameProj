#pragma once
#include "CoreMinimal.h"
#include "RsClosedCaptionEventData.h"
#include "RsClosedCaptionEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsClosedCaptionEvent, FRsClosedCaptionEventData, Data);

