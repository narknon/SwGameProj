#pragma once
#include "CoreMinimal.h"
#include "SwPushFXVictimData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSwPushFXVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePushSoundEffectOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePushFoley;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePushVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePushOverridenSoundEffectOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePushOverridenFoley;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePushOverridenVO;
    
    SWGAME_API FSwPushFXVictimData();
};

