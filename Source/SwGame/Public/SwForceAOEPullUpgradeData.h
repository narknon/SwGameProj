#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SwForceAOEPullUpgradeData.generated.h"

class USwForcePullAbilityEffect;

USTRUCT(BlueprintType)
struct FSwForceAOEPullUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForcePullAbilityEffect> EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BubbleRadius;
    
    SWGAME_API FSwForceAOEPullUpgradeData();
};

