#pragma once
#include "CoreMinimal.h"
#include "OnPostUpdateRopeDelegate.generated.h"

class URsRopeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPostUpdateRope, URsRopeComponent*, Rope, const float, Dt);

