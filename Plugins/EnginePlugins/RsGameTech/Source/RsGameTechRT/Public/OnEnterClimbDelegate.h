#pragma once
#include "CoreMinimal.h"
#include "ERsClimbEntryType.h"
#include "OnEnterClimbDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnterClimb, ERsClimbEntryType, EntryType);

