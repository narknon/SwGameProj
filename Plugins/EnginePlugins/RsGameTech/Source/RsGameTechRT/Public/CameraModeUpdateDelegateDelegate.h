#pragma once
#include "CoreMinimal.h"
#include "CameraModeUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCameraModeUpdateDelegate, FName, CameraModeName, float, TimeRemaining);

