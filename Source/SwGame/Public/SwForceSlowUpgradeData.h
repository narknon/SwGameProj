#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SwForceSlowUpgradeData.generated.h"

class UAkAudioEvent;
class UParticleSystem;
class USwForceSlowAbilityEffect;

USTRUCT(BlueprintType)
struct FSwForceSlowUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FieldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BubbleParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForceSlowAbilityEffect> EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioCastLeadin;
    
    SWGAME_API FSwForceSlowUpgradeData();
};

