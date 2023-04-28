#pragma once
#include "CoreMinimal.h"
#include "ERsSplineCameraInitMethod.generated.h"

UENUM(BlueprintType)
enum ERsSplineCameraInitMethod {
    SplineCameraInit_FromBeginning,
    SplineCameraInit_FromEnd,
    SplineCameraInit_CheckEntireSpline,
    SplineCameraInit_MAX UMETA(Hidden),
};

