#pragma once
#include "CoreMinimal.h"
#include "RsOnEncounterAIEventDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsOnEncounterAIEvent, ARsAICharacter*, DeadAI);

