#pragma once
#include "CoreMinimal.h"
#include "ERsHeroBufferFlags.generated.h"

UENUM(BlueprintType)
enum class ERsHeroBufferFlags : uint8 {
    bufferAttack,
    bufferAttackSpecial,
    bufferBlock,
    bufferEvade,
    bufferForcePull,
    bufferForcePush,
    bufferForceSlowdown,
    bufferGrab,
    bufferHeal,
    bufferInteract,
    bufferJump,
    bufferLightsaberSwitch,
    bufferSprint,
    bufferTelekinesis,
    bufferWallJump,
    BufferShoot,
    BufferBeastTame,
};

