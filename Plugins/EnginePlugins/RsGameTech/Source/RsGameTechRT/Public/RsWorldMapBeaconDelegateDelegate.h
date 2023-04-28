#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapBeaconDelegateDelegate.generated.h"

class ARsWorldMapBeacon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsWorldMapBeaconDelegate, ARsWorldMapBeacon*, WorldMapBeacon);

