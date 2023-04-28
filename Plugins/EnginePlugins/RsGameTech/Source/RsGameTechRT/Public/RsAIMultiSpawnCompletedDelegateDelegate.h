#pragma once
#include "CoreMinimal.h"
#include "ERsAISpawnResult.h"
#include "RsAIMultiSpawnCompletedDelegateDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsAIMultiSpawnCompletedDelegate, const TArray<ARsAICharacter*>&, SpawnedAIs, TEnumAsByte<ERsAISpawnResult::Type>, SpawnResult);

