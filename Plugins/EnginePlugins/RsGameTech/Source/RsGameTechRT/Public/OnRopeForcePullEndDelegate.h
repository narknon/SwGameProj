#pragma once
#include "CoreMinimal.h"
#include "OnRopeForcePullEndDelegate.generated.h"

class URsRopeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRopeForcePullEnd, URsRopeComponent*, Rope);

