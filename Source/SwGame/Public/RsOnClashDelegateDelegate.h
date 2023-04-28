#pragma once
#include "CoreMinimal.h"
#include "RsOnClashDelegateDelegate.generated.h"

class USwSaberClashComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsOnClashDelegate, USwSaberClashComponent*, ClashObject);

