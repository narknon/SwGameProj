#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SwForcePullUpgradeData.generated.h"

class UAkAudioEvent;
class USwForcePullAbilityEffect;

USTRUCT(BlueprintType)
struct FSwForcePullUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForcePullAbilityEffect> EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePullCastCharacterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePullCastCharacterStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePullYankCharacterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseYankBubbleOnYank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseYankBubbleOnTractorBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BubbleRadius;
    
    SWGAME_API FSwForcePullUpgradeData();
};

