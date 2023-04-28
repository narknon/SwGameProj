#pragma once
#include "CoreMinimal.h"
#include "ERsAIWaitReason.generated.h"

UENUM(BlueprintType)
enum class ERsAIWaitReason : uint8 {
    None,
    CombatAction,
    Sequencer,
    Sync = 0x4,
    Dismember = 0x8,
    Busy = 0xA,
    Script,
};

