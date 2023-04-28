#pragma once
#include "CoreMinimal.h"
#include "ERsLedgeEntryType.h"
#include "OnEnterLedgeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterLedge, ERsLedgeEntryType, EntryType);

