#pragma once
#include "CoreMinimal.h"
#include "SyncTopologyRequestResult.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FSyncTopologyRequestResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasAllBoundsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsWithinTopologyLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TopologyMinZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TopologyMaxZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> MissingBoundsAnimAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TopologyYawAngle;
    
    FSyncTopologyRequestResult();
};

