#pragma once
#include "CoreMinimal.h"
#include "SwMindTrick_OnNonTrickableDelegate.generated.h"

class ARsAICharacter;
class USwMindTrickComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwMindTrick_OnNonTrickable, USwMindTrickComponent*, InMindTrickComponent, ARsAICharacter*, InAICharacter);

