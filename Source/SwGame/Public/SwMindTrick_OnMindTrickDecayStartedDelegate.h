#pragma once
#include "CoreMinimal.h"
#include "SwMindTrick_OnMindTrickDecayStartedDelegate.generated.h"

class ARsAICharacter;
class USwMindTrickComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwMindTrick_OnMindTrickDecayStarted, USwMindTrickComponent*, InMindTrickComponent, ARsAICharacter*, InAICharacter);

