#pragma once
#include "CoreMinimal.h"
#include "ERsWorldStateNodeChangeReason.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldStateErrorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsWorldStateErrorDelegate, FRsWorldStateNodeRef, ChangedNode, ERsWorldStateNodeChangeReason, Reason, const TArray<FRsWorldStateNodeRef>&, NeededNodes);

