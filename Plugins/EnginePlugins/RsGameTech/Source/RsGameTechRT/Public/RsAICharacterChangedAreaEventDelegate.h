#pragma once
#include "CoreMinimal.h"
#include "RsAICharacterChangedAreaEventDelegate.generated.h"

class ARsAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsAICharacterChangedAreaEvent, ARsAICharacter*, DespawnedAI, bool, IsSpawningArea);

