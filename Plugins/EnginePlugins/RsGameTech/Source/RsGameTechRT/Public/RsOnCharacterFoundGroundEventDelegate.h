#pragma once
#include "CoreMinimal.h"
#include "RsOnCharacterFoundGroundEventDelegate.generated.h"

class ARsCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsOnCharacterFoundGroundEvent, ARsCharacter*, Character);

