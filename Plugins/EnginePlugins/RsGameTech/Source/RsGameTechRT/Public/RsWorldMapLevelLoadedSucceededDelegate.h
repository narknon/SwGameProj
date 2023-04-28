#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.h"
#include "RsWorldMapLevelLoadedSucceededDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRsWorldMapLevelLoadedSucceeded, FName, WorldMapName, const ERsWorldMapLevelType, LevelType);

