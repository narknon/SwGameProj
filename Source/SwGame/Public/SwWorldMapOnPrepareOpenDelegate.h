#pragma once
#include "CoreMinimal.h"
#include "ERsHolomapMode.h"
#include "SwWorldMapOnPrepareOpenDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwWorldMapOnPrepareOpen, ERsHolomapMode, InMode, float, InCameraInterpolationTime);

