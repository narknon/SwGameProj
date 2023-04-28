#pragma once
#include "CoreMinimal.h"
#include "ERsPathFollowMode.generated.h"

UENUM(BlueprintType)
enum class ERsPathFollowMode : uint8 {
    Invalid,
    OnGround,
    Fly,
    WalkDirect = 0x4,
    Platform = 0x8,
    Jump = 0x10,
    JumpStall = 0x20,
    End = 0xFF,
};

