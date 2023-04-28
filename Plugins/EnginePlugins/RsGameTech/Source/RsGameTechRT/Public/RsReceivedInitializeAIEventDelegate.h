#pragma once
#include "CoreMinimal.h"
#include "RsReceivedInitializeAIEventDelegate.generated.h"

class ARsAICharacter;
class ARsAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsReceivedInitializeAIEvent, const ARsAICharacter*, Character, ARsAIController*, Controller);

