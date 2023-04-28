#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapActorType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapActorType : uint8 {
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

