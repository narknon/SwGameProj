#pragma once
#include "CoreMinimal.h"
#include "EHoudiniAttributes.generated.h"

UENUM(BlueprintType)
enum EHoudiniAttributes {
    HOUDINI_ATTR_BEGIN,
    Position = 0x0,
    Normal,
    Time,
    POINTID,
    LIFE,
    Color,
    ALPHA,
    Velocity,
    Type,
    Impulse,
    AGE,
    HOUDINI_ATTR_SIZE,
    HOUDINI_ATTR_END = 0xA,
    EHoudiniAttributes_MAX = 0xC,
};

