#pragma once
#include "CoreMinimal.h"
#include "WalkPoseLeftParameters.generated.h"

USTRUCT(BlueprintType)
struct FWalkPoseLeftParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SyncGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviousMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespectOrder;
    
    RSGAMETECHRT_API FWalkPoseLeftParameters();
};

