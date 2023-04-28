#pragma once
#include "CoreMinimal.h"
#include "MotionWarpingWindowData.generated.h"

class UAnimNotifyState_MotionWarping;

USTRUCT(BlueprintType)
struct FMotionWarpingWindowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimNotifyState_MotionWarping* AnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    MOTIONWARPING_API FMotionWarpingWindowData();
};

