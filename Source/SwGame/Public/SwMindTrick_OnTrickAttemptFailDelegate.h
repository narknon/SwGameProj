#pragma once
#include "CoreMinimal.h"
#include "SwMindTrick_OnTrickAttemptFailDelegate.generated.h"

class ARsAICharacter;
class USwMindTrickComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwMindTrick_OnTrickAttemptFail, USwMindTrickComponent*, InMindTrickComponent, ARsAICharacter*, InAICharacter);

