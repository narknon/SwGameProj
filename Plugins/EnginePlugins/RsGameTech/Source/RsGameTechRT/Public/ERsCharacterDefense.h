#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterDefense.generated.h"

UENUM(BlueprintType)
enum class ERsCharacterDefense : uint8 {
    Unknown,
    Block,
    BlockContact,
    Parry,
    ParryNeutral,
    Evade,
    EvadeForceAbility,
    ProjectileDefend,
    BlockStaff,
    SaberStd,
    StaffStd,
    Heavy,
    Multi,
    LeapAtk,
    AirFocus,
    LSThrow,
    ThrowProj,
    NumCodeDefense,
    None,
    Placeholder1 = 0xF8,
    Placeholder2,
    Placeholder3,
    Placeholder4,
    Placeholder5,
    Placeholder6,
    Placeholder7,
    Placeholder8,
};

