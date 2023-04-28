#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwSlowFXVictimData.generated.h"

class UAkAudioEvent;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FSwSlowFXVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ForceSlowParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayForceSlowSoundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForceSlowSoundEffectStartOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayOverrideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldVictimDataApplyClipSpaceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D VelocityBufferClipSpaceOverride;
    
    SWGAME_API FSwSlowFXVictimData();
};

