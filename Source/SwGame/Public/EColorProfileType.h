#pragma once
#include "CoreMinimal.h"
#include "EColorProfileType.generated.h"

UENUM(BlueprintType)
enum class EColorProfileType : uint8 {
    HealthBar,
    ForceBar,
    BlockingBar,
    OtherBars,
    HealthRegen,
    LowHealth,
    UnblockableAttacks,
    RevengeHilight,
    EnemyHealth,
    EnemyBlock,
    TargetDot,
    SyncKillIcon,
    ForceTarget,
    ForceTargetBlocked,
    SubtitleCharacterNames,
    SubtitleDialog,
    SubtitleBackgroundDialog,
    SubtitleBackground,
    Gateways,
    UnlockedDoors,
    LockedDoors,
    UnlockableDoors,
    Connectors,
    Tar,
    PlayerArrow,
    Rumors,
    Bounties,
    MapBackground,
    End,
};

