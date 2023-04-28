#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.h"
#include "SwWorldMapOnElevationLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwWorldMapOnElevationLevelChanged, ERsWorldMapLevelType, LevelType, uint8, ElevationLevel);

