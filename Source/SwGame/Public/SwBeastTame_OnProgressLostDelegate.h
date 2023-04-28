#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnProgressLostDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSwBeastTame_OnProgressLost, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter, float, TameTimeLost, float, TameTimePrevious, float, TameTimeTotal);

