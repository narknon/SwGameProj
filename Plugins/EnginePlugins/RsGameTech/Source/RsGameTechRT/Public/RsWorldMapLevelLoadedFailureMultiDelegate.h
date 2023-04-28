#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.h"
#include "RsWorldMapLevelLoadedFailureMultiDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsWorldMapLevelLoadedFailureMulti, FName, WorldMapName, const ERsWorldMapLevelType, LevelType);

