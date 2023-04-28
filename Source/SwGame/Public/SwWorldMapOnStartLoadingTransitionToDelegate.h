#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.h"
#include "SwWorldMapOnStartLoadingTransitionToDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwWorldMapOnStartLoadingTransitionTo, ERsWorldMapLevelType, LevelType);

