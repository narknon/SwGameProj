#pragma once
#include "CoreMinimal.h"
#include "ERsLedgeShimmyTarget.generated.h"

UENUM(BlueprintType)
namespace ERsLedgeShimmyTarget {
    enum Type {
        SHIMMY_HORIZONTAL,
        OUTSIDE_CORNER,
        INSIDE_CORNER,
        SHIMMY_VERTICAL,
        LEAP_HORIZONTAL,
        LEAP_VERTICAL,
        UNKNOWN,
    };
}

