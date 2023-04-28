#pragma once
#include "CoreMinimal.h"
#include "RsUiWindowEventDelegate.generated.h"

class URsUiButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsUiWindowEvent, URsUiButton*, Button);

