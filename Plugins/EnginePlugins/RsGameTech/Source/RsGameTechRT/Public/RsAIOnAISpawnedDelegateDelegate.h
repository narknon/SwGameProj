#pragma once
#include "CoreMinimal.h"
#include "ERsAISpawnResult.h"
#include "RsAIOnAISpawnedDelegateDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRsAIOnAISpawnedDelegate, ARsAICharacter*, SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type>, SpawnResult);

