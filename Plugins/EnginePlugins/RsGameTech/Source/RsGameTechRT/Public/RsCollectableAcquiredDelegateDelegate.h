#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapCollectableType.h"
#include "RsCollectableAcquiredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsCollectableAcquiredDelegate, ERsWorldMapCollectableType, CollectableType, const FName&, WorldName, const FName&, RegionName);

