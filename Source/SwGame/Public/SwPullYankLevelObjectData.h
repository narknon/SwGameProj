#pragma once
#include "CoreMinimal.h"
#include "SwPullYankLevelObjectData.generated.h"

USTRUCT(BlueprintType)
struct FSwPullYankLevelObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PullYankSpeedOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRotate;
    
    SWGAME_API FSwPullYankLevelObjectData();
};

