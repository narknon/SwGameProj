#pragma once
#include "CoreMinimal.h"
#include "RsCharacterInterruptedEventDelegate.generated.h"

class ARsCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsCharacterInterruptedEvent, ARsCharacter*, InterruptedCharacter);

