#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapMapSectionCountArray.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapMapSectionCountArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> PerRegionMapSectionCounts;
    
    RSGAMETECHRT_API FRsWorldMapMapSectionCountArray();
};

