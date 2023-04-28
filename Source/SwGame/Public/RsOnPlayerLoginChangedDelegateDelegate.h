#pragma once
#include "CoreMinimal.h"
#include "RsOnPlayerLoginChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsOnPlayerLoginChangedDelegate, int32, ControllerId, bool, bIsLoggedIn);

