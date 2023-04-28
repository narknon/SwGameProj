#pragma once
#include "CoreMinimal.h"
#include "ERsAIDespawnReason.h"
#include "RsAIOnAIDespawnedDelegateDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FRsAIOnAIDespawnedDelegate, ARsAICharacter*, DespawnedAI, TEnumAsByte<ERsAIDespawnReason::Type>, DespawnReason);

