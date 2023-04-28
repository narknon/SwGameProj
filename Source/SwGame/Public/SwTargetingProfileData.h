#pragma once
#include "CoreMinimal.h"
#include "ESwTargetingTraceMode.h"
#include "SwTargetingProfileData.generated.h"

USTRUCT(BlueprintType)
struct FSwTargetingProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwTargetingTraceMode TraceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrioritizeZTarget;
    
    SWGAME_API FSwTargetingProfileData();
};

