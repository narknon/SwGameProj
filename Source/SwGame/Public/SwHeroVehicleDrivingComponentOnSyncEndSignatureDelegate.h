#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeSyncID.h"
#include "SwHeroVehicleDrivingComponentOnSyncEndSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSwHeroVehicleDrivingComponentOnSyncEndSignature, FSwSpeederBikeSyncID, SyncID);

