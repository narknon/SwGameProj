#pragma once
#include "CoreMinimal.h"
#include "ERsAISpawnResult.h"
#include "RsAISingleSpawnedDelegateDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRsAISingleSpawnedDelegate, ARsAICharacter*, SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type>, SpawnResult);

