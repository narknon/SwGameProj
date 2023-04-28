#pragma once
#include "CoreMinimal.h"
#include "OnRsInputActionWithReturnDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRsInputActionWithReturn, FName, ActionName, bool&, bOutReturn);

