#pragma once
#include "CoreMinimal.h"
#include "SwSectorMapOnSectorChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwSectorMapOnSectorChanged, FName, Previous, FName, New);

