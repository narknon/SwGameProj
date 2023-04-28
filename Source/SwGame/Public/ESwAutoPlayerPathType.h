#pragma once
#include "CoreMinimal.h"
#include "ESwAutoPlayerPathType.generated.h"

UENUM(BlueprintType)
enum ESwAutoPlayerPathType {
    AP_Pathfinder,
    APP_Direct,
    AP_Teleport,
    AP_Lerp,
};

