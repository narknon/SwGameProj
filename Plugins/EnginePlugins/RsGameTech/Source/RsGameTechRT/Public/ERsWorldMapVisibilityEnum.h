#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapVisibilityEnum.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapVisibilityEnum : uint8 {
    Undefined,
    Path,
    Border,
    Landmark,
    Terrain,
    Sector,
    Icon,
    Beacon,
    Gateway,
    Tar,
    Water,
    Player,
    BreadCrumb,
    SavePoint,
    Connector,
    Rumor,
    RouteLine,
    ObjectiveIcon,
    NavAssistIcon,
    DeathRevengeIcon,
    Count,
};

