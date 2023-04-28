#pragma once
#include "CoreMinimal.h"
#include "SwMindTrick_OnMindTrickReturnHomeResetDelegate.generated.h"

class ARsAICharacter;
class USwMindTrickComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwMindTrick_OnMindTrickReturnHomeReset, USwMindTrickComponent*, InMindTrickComponent, ARsAICharacter*, InAICharacter);

