#pragma once
#include "CoreMinimal.h"
#include "SwMindTrick_OnMindTrickAttemptDelegate.generated.h"

class ARsAICharacter;
class USwMindTrickComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwMindTrick_OnMindTrickAttempt, USwMindTrickComponent*, InMindTrickComponent, ARsAICharacter*, InAICharacter);

