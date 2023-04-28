#pragma once
#include "CoreMinimal.h"
#include "RsOnSyncEndingDelegateDelegate.generated.h"

class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsOnSyncEndingDelegate, UAnimMontage*, Montage, bool, bInterrupted);

