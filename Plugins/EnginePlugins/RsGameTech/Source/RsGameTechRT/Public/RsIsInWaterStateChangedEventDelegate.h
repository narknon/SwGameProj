#pragma once
#include "CoreMinimal.h"
#include "RsIsInWaterStateChangedEventDelegate.generated.h"

class ARsCharacter;
class ARsNavVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRsIsInWaterStateChangedEvent, ARsCharacter*, Character, ARsNavVolume*, Volume, bool, bIsInWater, bool, bWasInWater);

