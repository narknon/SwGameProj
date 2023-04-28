#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnTameSucceedDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwBeastTame_OnTameSucceed, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter);

