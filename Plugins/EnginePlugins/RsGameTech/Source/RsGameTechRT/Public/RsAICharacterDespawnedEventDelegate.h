#pragma once
#include "CoreMinimal.h"
#include "ERsAIDespawnReason.h"
#include "RsAICharacterDespawnedEventDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsAICharacterDespawnedEvent, ARsAICharacter*, DespawnedAI, TEnumAsByte<ERsAIDespawnReason::Type>, DespawnReason);

