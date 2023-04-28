#pragma once
#include "CoreMinimal.h"
#include "RsAIOnCombatantDiedEventDelegate.generated.h"

class AActor;
class URsAIGameStateManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsAIOnCombatantDiedEvent, URsAIGameStateManager*, GameStateManager, AActor*, DeadCombatant);

