#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeSyncID.h"
#include "SwHeroVehicleDrivingComponentOnSyncStartSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwHeroVehicleDrivingComponentOnSyncStartSignature, FSwSpeederBikeSyncID, SyncID);

