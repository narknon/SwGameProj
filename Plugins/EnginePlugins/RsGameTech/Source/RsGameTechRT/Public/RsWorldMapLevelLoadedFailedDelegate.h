#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.h"
#include "RsWorldMapLevelLoadedFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRsWorldMapLevelLoadedFailed, FName, WorldMapName, const ERsWorldMapLevelType, LevelType);

