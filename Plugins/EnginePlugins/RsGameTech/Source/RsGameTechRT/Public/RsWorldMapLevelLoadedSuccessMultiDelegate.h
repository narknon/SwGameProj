#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.h"
#include "RsWorldMapLevelLoadedSuccessMultiDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsWorldMapLevelLoadedSuccessMulti, FName, WorldMapName, const ERsWorldMapLevelType, LevelType);

