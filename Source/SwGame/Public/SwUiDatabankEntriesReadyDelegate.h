#pragma once
#include "CoreMinimal.h"
#include "SwUiDatabankEntriesReadyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwUiDatabankEntriesReady, int32, Placeholder);

