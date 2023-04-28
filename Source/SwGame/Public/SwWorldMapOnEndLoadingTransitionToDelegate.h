#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.h"
#include "SwWorldMapOnEndLoadingTransitionToDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwWorldMapOnEndLoadingTransitionTo, ERsWorldMapLevelType, LevelType);

