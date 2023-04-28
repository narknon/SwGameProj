#pragma once
#include "CoreMinimal.h"
#include "RsOnAttackEndDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsOnAttackEndDelegate, bool, bWasAborted);

