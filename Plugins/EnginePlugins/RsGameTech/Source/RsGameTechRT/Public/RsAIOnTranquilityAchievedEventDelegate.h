#pragma once
#include "CoreMinimal.h"
#include "RsAIOnTranquilityAchievedEventDelegate.generated.h"

class URsAIGameStateManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsAIOnTranquilityAchievedEvent, URsAIGameStateManager*, GameStateManager);

