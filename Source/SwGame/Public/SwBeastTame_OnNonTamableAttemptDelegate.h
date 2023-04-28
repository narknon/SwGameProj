#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnNonTamableAttemptDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwBeastTame_OnNonTamableAttempt, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter);

