#pragma once
#include "CoreMinimal.h"
#include "OnAsyncImageEventDelegate.generated.h"

class USwAsyncImage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncImageEvent, USwAsyncImage*, Image);

