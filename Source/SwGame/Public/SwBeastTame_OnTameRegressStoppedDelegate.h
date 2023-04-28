#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnTameRegressStoppedDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwBeastTame_OnTameRegressStopped, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter);

