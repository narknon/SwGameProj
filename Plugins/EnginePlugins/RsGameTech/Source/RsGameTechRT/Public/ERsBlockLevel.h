#pragma once
#include "CoreMinimal.h"
#include "ERsBlockLevel.generated.h"

UENUM(BlueprintType)
enum class ERsBlockLevel : uint8 {
    BL_BLOCK,
    BL_BLOCKBREAK,
    BL_UNBLOCKABLE,
    NUM_BLOCK_LEVEL,
};

