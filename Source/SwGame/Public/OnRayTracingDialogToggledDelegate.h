#pragma once
#include "CoreMinimal.h"
#include "OnRayTracingDialogToggledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRayTracingDialogToggled, bool, bShowDialog);

