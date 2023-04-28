#pragma once
#include "CoreMinimal.h"
#include "ERsJointTool.generated.h"

UENUM(BlueprintType)
enum class ERsJointTool : uint8 {
    BM_ToJointSpace,
    BM_ProjectJoint,
    BM_MAX UMETA(Hidden),
};

