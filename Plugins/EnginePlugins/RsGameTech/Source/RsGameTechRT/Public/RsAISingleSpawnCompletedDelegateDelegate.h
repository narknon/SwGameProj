#pragma once
#include "CoreMinimal.h"
#include "ERsAISpawnResult.h"
#include "RsAISingleSpawnCompletedDelegateDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsAISingleSpawnCompletedDelegate, ARsAICharacter*, SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type>, SpawnResult);

