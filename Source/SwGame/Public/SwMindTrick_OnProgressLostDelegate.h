#pragma once
#include "CoreMinimal.h"
#include "SwMindTrick_OnProgressLostDelegate.generated.h"

class ARsAICharacter;
class USwMindTrickComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSwMindTrick_OnProgressLost, USwMindTrickComponent*, InMindTrickComponent, ARsAICharacter*, InAICharacter, float, MindTrickTimeLost, float, MindTrickTimePrevious, float, MindTrickTimeTotal);

