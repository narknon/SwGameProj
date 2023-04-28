#pragma once
#include "CoreMinimal.h"
#include "RsUiWindowEventNavigationDelegate.generated.h"

class URsUiButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsUiWindowEventNavigation, URsUiButton*, Button, bool, bFromUserNavigation);

