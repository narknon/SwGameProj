#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapSectionColorType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapSectionColorType : uint8 {
    ActiveLayer,
    ActiveLayerFogOfWar,
    ActiveLayerObjective,
    SelectedRegion,
    SelectedRegionFogOfWar,
    SelectedRegionObjective,
    InactiveLayerTop,
    InactiveLayerTopFogOfWar,
    InactiveLayerTopObjective,
    InactiveLayerBottom,
    InactiveLayerBottomFogOfWar,
    InactiveLayerBottomObjective,
    Count,
};

