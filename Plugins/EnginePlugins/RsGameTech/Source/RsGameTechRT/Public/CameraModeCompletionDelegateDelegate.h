#pragma once
#include "CoreMinimal.h"
#include "CameraModeCompletionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraModeCompletionDelegate, FName, CameraModeName);

