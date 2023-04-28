#pragma once
#include "CoreMinimal.h"
#include "OnRsInputActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRsInputAction, FName, ActionName);

