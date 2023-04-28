#pragma once
#include "CoreMinimal.h"
#include "RsAudioBoneData.h"
#include "RsAudioBoneTrackingData.generated.h"

class UAkAudioEvent;
class UAkRtpc;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAudioBoneTrackingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LoopingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAudioBoneData> TrackedBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDisplayRTPCOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    FRsAudioBoneTrackingData();
};

