#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnTameReturnHomeResetDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwBeastTame_OnTameReturnHomeReset, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter);

