#pragma once
#include "CoreMinimal.h"
#include "ERsAISpawnResult.h"
#include "RsAICharacterSpawnedEventDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsAICharacterSpawnedEvent, ARsAICharacter*, SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type>, SpawnResult);

