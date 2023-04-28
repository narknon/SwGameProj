#pragma once
#include "CoreMinimal.h"
#include "OnRopeForcePullStartDelegate.generated.h"

class URsRopeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRopeForcePullStart, URsRopeComponent*, Rope);

