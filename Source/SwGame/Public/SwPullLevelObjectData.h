#pragma once
#include "CoreMinimal.h"
#include "SwPullDoubleSlamLevelObjectData.h"
#include "SwPullTractorLevelObjectData.h"
#include "SwPullYankLevelObjectData.h"
#include "SwPullLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwPullLevelObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullYankLevelObjectData YankData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullTractorLevelObjectData TractorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullDoubleSlamLevelObjectData DoubleSlamData;
    
    SWGAME_API FSwPullLevelObjectData();
};

