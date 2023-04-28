#pragma once
#include "CoreMinimal.h"
#include "RsOnPauseMenuToggledDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsOnPauseMenuToggledDelegate, bool, bPauseMenuToggled);

