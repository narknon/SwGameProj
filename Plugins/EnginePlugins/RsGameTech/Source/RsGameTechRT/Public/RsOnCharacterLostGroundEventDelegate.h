#pragma once
#include "CoreMinimal.h"
#include "RsOnCharacterLostGroundEventDelegate.generated.h"

class ARsCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsOnCharacterLostGroundEvent, ARsCharacter*, Character);

