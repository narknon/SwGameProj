#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapLevelType.generated.h"

UENUM(BlueprintType)
enum class ERsWorldMapLevelType : uint8 {
    Interior,
    Local,
    Sector,
    Galaxy,
    FastTravelSector,
    Count,
};

