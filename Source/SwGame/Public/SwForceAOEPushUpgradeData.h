#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SwForceAOEPushUpgradeData.generated.h"

class USwForcePushAbilityEffect;

USTRUCT(BlueprintType)
struct FSwForceAOEPushUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwForcePushAbilityEffect> EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    SWGAME_API FSwForceAOEPushUpgradeData();
};

