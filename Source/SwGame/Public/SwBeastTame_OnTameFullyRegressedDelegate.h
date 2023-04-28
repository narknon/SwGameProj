#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnTameFullyRegressedDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwBeastTame_OnTameFullyRegressed, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter);

