#pragma once
#include "CoreMinimal.h"
#include "ERsWorldStateNodeChangeReason.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsWorldStateChangedDelegate, FRsWorldStateNodeRef, Node, bool, bWasCompleted, ERsWorldStateNodeChangeReason, Reason);

