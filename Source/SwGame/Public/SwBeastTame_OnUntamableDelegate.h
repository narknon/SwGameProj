#pragma once
#include "CoreMinimal.h"
#include "SwBeastTame_OnUntamableDelegate.generated.h"

class ARsAICharacter;
class USwBeastTameComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwBeastTame_OnUntamable, USwBeastTameComponent*, InBeastTameComponent, ARsAICharacter*, InAICharacter);

