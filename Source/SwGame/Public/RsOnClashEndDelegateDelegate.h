#pragma once
#include "CoreMinimal.h"
#include "RsOnClashEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsOnClashEndDelegate, bool, Succeeded);

