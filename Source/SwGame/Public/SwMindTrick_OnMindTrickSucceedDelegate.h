#pragma once
#include "CoreMinimal.h"
#include "SwMindTrick_OnMindTrickSucceedDelegate.generated.h"

class ARsAICharacter;
class USwMindTrickComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwMindTrick_OnMindTrickSucceed, USwMindTrickComponent*, InMindTrickComponent, ARsAICharacter*, InAICharacter);

