#pragma once
#include "CoreMinimal.h"
#include "RsAIOnPlayerVictoryEventDelegate.generated.h"

class URsAIGameStateManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsAIOnPlayerVictoryEvent, URsAIGameStateManager*, GameStateManager);

