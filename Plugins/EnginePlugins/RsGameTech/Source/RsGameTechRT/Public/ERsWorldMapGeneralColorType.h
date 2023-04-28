#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapGeneralColorType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapGeneralColorType : uint8 {
    Background,
    Gateway,
    UnlockedDoor,
    LockedDoor,
    UnlockableDoor,
    PlayerArrow,
    Rumor,
    Bounty,
    Tar,
    Connector,
    Count,
};

