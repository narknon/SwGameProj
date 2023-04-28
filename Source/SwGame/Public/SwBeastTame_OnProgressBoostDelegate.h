#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnProgressBoostDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSwBeastTame_OnProgressBoost, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter, float, TameTimeGained, float, TameTimeTotal, float, TameTimePrevious);

