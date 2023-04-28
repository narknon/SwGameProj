#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_CommonAudioParameters.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_CommonAudioParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ProjectileHitSoundIfNotDestructed;
    
    FSwSimpleDestructible_CommonAudioParameters();
};

