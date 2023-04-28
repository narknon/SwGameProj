#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapWidgetFilterType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapWidgetFilterType : uint8 {
    Activities,
    Beacons,
    Chests,
    Merchants,
    Mantis,
    PointOfInterest,
    Bounties,
    Rumors,
    VoidTears,
    Gateways,
    SavePoints,
    Unfilterable,
    Totems,
    LostTreasures,
    Seeds,
    DatabankScans,
    Count,
};

