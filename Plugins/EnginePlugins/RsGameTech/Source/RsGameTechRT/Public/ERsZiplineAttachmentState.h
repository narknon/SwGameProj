#pragma once
#include "CoreMinimal.h"
#include "ERsZiplineAttachmentState.generated.h"

UENUM(BlueprintType)
enum class ERsZiplineAttachmentState : uint8 {
    Disabled,
    ActiveSeek,
    Entry,
    Movement,
    ChangingDirection,
    Jumping,
};

