#pragma once
#include "CoreMinimal.h"
#include "ERsWallConnectionType.generated.h"

UENUM(BlueprintType)
enum class ERsWallConnectionType : uint8 {
    NoAttachment,
    WallRun,
    WallHang,
};

