#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.h"
#include "SwWorldMapOnStartTransitionToDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwWorldMapOnStartTransitionTo, ERsWorldMapLevelType, LevelType);

