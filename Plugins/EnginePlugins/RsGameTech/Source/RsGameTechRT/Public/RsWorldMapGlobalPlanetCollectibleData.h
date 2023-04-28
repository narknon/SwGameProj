#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapGlobalPlanetCollectibleData.generated.h"

class URsWorldMapGlobalPlanetData;

USTRUCT(BlueprintType)
struct FRsWorldMapGlobalPlanetCollectibleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsWorldMapGlobalPlanetData* GlobalPlanetData;
    
    RSGAMETECHRT_API FRsWorldMapGlobalPlanetCollectibleData();
};

