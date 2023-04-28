#pragma once
#include "CoreMinimal.h"
#include "RsBinocularsBeaconDelegateDelegate.generated.h"

class ASwBinocularsBeacon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsBinocularsBeaconDelegate, ASwBinocularsBeacon*, BinocularsBeacon);

