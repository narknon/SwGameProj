#pragma once
#include "CoreMinimal.h"
#include "ERsBlockDepleteLevel.generated.h"

UENUM(BlueprintType)
enum class ERsBlockDepleteLevel : uint8 {
    blk_Small,
    blk_Medium,
    blk_Large,
    blk_Alt1,
    blk_Alt2,
    NumBlockDepleteLevel,
};

