#pragma once
#include "CoreMinimal.h"
#include "ERsAIEncounterSpawnResult.h"
#include "RsAIEncounterSpawnCompletedDelegateDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsAIEncounterSpawnCompletedDelegate, const TArray<ARsAICharacter*>&, SpawnedAIs, TEnumAsByte<ERsAIEncounterSpawnResult>, SpawnResult);

