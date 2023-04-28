#pragma once
#include "CoreMinimal.h"
#include "K2OnAttackEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FK2OnAttackEnded, bool, bInterrupted);

