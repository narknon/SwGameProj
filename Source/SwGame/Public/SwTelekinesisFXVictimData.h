#pragma once
#include "CoreMinimal.h"
#include "SwTelekinesisFXVictimData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSwTelekinesisFXVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForceTelekinesisLoopAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForceTelekinesisLoopStopAudio;
    
    SWGAME_API FSwTelekinesisFXVictimData();
};

