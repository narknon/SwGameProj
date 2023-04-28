#pragma once
#include "CoreMinimal.h"
#include "ERsLocationSyncType.generated.h"

UENUM(BlueprintType)
namespace ERsLocationSyncType {
    enum Type {
        FEET_LOCATION_ACTOR_ORIENTATION,
        USE_TRANSFORM,
        FEET_LOCATION_MASTER_TO_SLAVE_ORIENTATION,
    };
}

