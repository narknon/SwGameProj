#pragma once
#include "CoreMinimal.h"
#include "ERsUiInputDeviceType.h"
#include "RsUiInputDeviceEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsUiInputDeviceEvent, ERsUiInputDeviceType, NewInputDevice);

