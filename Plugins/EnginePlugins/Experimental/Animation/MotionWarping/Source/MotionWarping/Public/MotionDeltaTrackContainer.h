#pragma once
#include "CoreMinimal.h"
#include "MotionDeltaTrack.h"
#include "MotionDeltaTrackContainer.generated.h"

USTRUCT(BlueprintType)
struct FMotionDeltaTrackContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMotionDeltaTrack> Tracks;
    
    MOTIONWARPING_API FMotionDeltaTrackContainer();
};

