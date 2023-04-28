#pragma once
#include "CoreMinimal.h"
#include "ERsMonkeyBeamClimbInputMode.generated.h"

UENUM(BlueprintType)
enum ERsMonkeyBeamClimbInputMode {
    ClimbWhenNotSwinging,
    ClimbWhenNotSwingingInput,
    ClimbUsingSeperateInput,
};

