#pragma once
#include "CoreMinimal.h"
#include "ERsRopeHandAttachmentAutoUpdateMode.generated.h"

UENUM(BlueprintType)
enum class ERsRopeHandAttachmentAutoUpdateMode : uint8 {
    None,
    AutoUpdateRopeHandAttachments,
    AutoUpdateClosestRopeHandAttachments,
    AutoUpdateLengthRopeHandAttachments,
};

