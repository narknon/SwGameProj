#pragma once
#include "CoreMinimal.h"
#include "SwMeditationTrainingEnemySpawnedEventDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwMeditationTrainingEnemySpawnedEvent, ARsAICharacter*, Enemy);

