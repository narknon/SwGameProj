#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnTameRegressStartedDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwBeastTame_OnTameRegressStarted, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter);

