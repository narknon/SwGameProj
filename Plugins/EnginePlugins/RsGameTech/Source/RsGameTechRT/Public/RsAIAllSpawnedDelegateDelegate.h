#pragma once
#include "CoreMinimal.h"
#include "ERsAISpawnResult.h"
#include "RsAIAllSpawnedDelegateDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRsAIAllSpawnedDelegate, const TArray<ARsAICharacter*>&, SpawnedAIs, TEnumAsByte<ERsAISpawnResult::Type>, SpawnResult);

