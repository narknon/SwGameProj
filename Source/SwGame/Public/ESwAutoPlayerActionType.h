#pragma once
#include "CoreMinimal.h"
#include "ESwAutoPlayerActionType.generated.h"

UENUM(BlueprintType)
enum ESwAutoPlayerActionType {
    AP_None,
    AP_InteractNear,
    AP_Interact,
    AP_MAX UMETA(Hidden),
};

