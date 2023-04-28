#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnTameAttemptDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwBeastTame_OnTameAttempt, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter);

