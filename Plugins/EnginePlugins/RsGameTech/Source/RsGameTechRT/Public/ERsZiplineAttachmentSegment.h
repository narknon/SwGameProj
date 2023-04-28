#pragma once
#include "CoreMinimal.h"
#include "ERsZiplineAttachmentSegment.generated.h"

UENUM(BlueprintType)
enum class ERsZiplineAttachmentSegment : uint8 {
    TopSegment,
    MiddleSegment,
    BottomSegment,
};

