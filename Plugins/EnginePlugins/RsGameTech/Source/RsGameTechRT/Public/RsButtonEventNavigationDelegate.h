#pragma once
#include "CoreMinimal.h"
#include "RsButtonEventNavigationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsButtonEventNavigation, bool, bFromUserNavigation);

