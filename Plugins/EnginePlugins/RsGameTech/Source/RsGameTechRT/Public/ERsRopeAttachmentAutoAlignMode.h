#pragma once
#include "CoreMinimal.h"
#include "ERsRopeAttachmentAutoAlignMode.generated.h"

UENUM(BlueprintType)
enum class ERsRopeAttachmentAutoAlignMode : uint8 {
    None,
    AutoAlignToSwingDirection,
    AutoAlignToTargetDirection,
};

