#pragma once
#include "CoreMinimal.h"
#include "ERsNavLinkValidationStatus.generated.h"

UENUM(BlueprintType)
enum ERsNavLinkValidationStatus {
    Valid,
    FailedToFindGround_Left,
    FailedToFindGround_Right,
    FailedToFindGround_LeftAndRight,
};

