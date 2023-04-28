#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnTameRegressUpdateDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSwBeastTame_OnTameRegressUpdate, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter, float, TameCurrentRegress, float, TameMaxRegress);

