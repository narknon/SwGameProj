#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnTameDecayStartedDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwBeastTame_OnTameDecayStarted, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter);

