#pragma once
#include "CoreMinimal.h"
#include "ERsHolomapMode.h"
#include "SwWorldMapOnPrepareCloseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwWorldMapOnPrepareClose, ERsHolomapMode, InMode);

