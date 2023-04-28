#pragma once
#include "CoreMinimal.h"
#include "SwMeditationTrainingEnemyCountChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwMeditationTrainingEnemyCountChangedEvent, int32, EnemyCount);

