#pragma once
#include "CoreMinimal.h"
#include "SwPullFXVictimData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSwPullFXVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePullEnterStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePullEnterStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePullVOEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePullFoleyEvent;
    
    SWGAME_API FSwPullFXVictimData();
};

