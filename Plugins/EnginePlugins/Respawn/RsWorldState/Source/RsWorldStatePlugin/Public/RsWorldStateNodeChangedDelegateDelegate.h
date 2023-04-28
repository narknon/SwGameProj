#pragma once
#include "CoreMinimal.h"
#include "ERsWorldStateNodeChangeReason.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldStateNodeChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRsWorldStateNodeChangedDelegate, FRsWorldStateNodeRef, Node, bool, bWasCompleted, ERsWorldStateNodeChangeReason, Reason);

