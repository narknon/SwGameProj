#pragma once
#include "CoreMinimal.h"
#include "RsOnSyncStoppedMulticastDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsOnSyncStoppedMulticastDelegate, bool, bInterrupted);

