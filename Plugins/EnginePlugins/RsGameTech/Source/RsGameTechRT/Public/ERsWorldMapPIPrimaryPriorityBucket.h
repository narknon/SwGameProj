#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapPIPrimaryPriorityBucket.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapPIPrimaryPriorityBucket : uint8 {
    Invalid,
    One,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Count,
};

