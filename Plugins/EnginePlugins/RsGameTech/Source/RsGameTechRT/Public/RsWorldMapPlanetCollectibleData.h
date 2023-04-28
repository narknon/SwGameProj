#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapPlanetCollectibleParallelData.h"
#include "RsWorldMapPlanetCollectibleData.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapPlanetCollectibleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapPlanetCollectibleParallelData ParallelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CollectibleTypeCounts;
    
    RSGAMETECHRT_API FRsWorldMapPlanetCollectibleData();
};

