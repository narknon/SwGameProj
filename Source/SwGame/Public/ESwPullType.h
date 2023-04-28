#pragma once
#include "CoreMinimal.h"
#include "ESwPullType.generated.h"

UENUM(BlueprintType)
enum class ESwPullType : uint8 {
    Yank,
    Tractor,
    TractorCounter,
    Attachment,
    Struggle,
    Count,
};

