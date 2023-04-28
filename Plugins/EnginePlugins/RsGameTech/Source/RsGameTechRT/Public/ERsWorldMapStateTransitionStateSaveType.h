#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapStateTransitionStateSaveType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapStateTransitionStateSaveType : uint8 {
    DontSaveOnBroadcast,
    SaveOnBroadcast,
    Count,
};

