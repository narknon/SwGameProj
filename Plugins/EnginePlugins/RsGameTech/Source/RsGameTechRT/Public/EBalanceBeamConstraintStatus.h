#pragma once
#include "CoreMinimal.h"
#include "EBalanceBeamConstraintStatus.generated.h"

UENUM(BlueprintType)
enum EBalanceBeamConstraintStatus {
    BalanceBeamConstraint_None,
    BalanceBeamConstraint_WalkingOnBeam,
    BalanceBeamConstraint_HangingFromBeam,
    BalanceBeamConstraint_Point,
    BalanceBeamConstraint_Point_IgnoreRotation,
    BalanceBeamConstraint_Revolute,
    BalanceBeamConstraint_MAX UMETA(Hidden),
};

