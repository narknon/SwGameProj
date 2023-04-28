#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapCollectableCountArray.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapCollectableCountArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> CollectableCounts;
    
    RSGAMETECHRT_API FRsWorldMapCollectableCountArray();
};

