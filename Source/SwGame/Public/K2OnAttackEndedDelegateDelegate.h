#pragma once
#include "CoreMinimal.h"
#include "K2OnAttackEndedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FK2OnAttackEndedDelegate, bool, bInterrupted);

