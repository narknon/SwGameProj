#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterNavigationComponentType.generated.h"

UENUM(BlueprintType)
namespace ERsCharacterNavigationComponentType {
    enum Type {
        NC_LEDGE,
        NC_CLIMB,
        NC_ZIPLINE,
        NC_SWIM,
        NC_BEAM,
        NC_VEHICLE,
        NC_WALL_RUN,
        NC_WALL_HANG,
        NC_SIZE,
        NC_UNKNOWN,
        NC_FLAG_ALL = -0x1,
        NC_FLAG_NONE,
        NC_MAX = 0xA,
    };
}

