#pragma once
#include "CoreMinimal.h"
#include "ESwGameDestructionSaveType.generated.h"

UENUM(BlueprintType)
enum class ESwGameDestructionSaveType : uint8 {
    NeverSave,
    SaveAtCheckpoint,
    SaveImmediately,
    SavePerEncounter,
    UseWorldStateSystem,
};

