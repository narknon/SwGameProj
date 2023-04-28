#pragma once
#include "CoreMinimal.h"
#include "RsHealthChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsHealthChangedEvent, float, PrevHealth, float, NewHealth);

