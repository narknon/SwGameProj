#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MotionWarpingSyncPoint.generated.h"

USTRUCT(BlueprintType)
struct MOTIONWARPING_API FMotionWarpingSyncPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Rotation;
    
public:
    FMotionWarpingSyncPoint();
};

