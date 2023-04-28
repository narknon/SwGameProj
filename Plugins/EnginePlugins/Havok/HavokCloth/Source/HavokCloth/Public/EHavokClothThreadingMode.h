#pragma once
#include "CoreMinimal.h"
#include "EHavokClothThreadingMode.generated.h"

UENUM(BlueprintType)
enum class EHavokClothThreadingMode : uint8 {
    TaskGraph,
    HavokDefaultTaskQueue,
    SingleThread,
};

