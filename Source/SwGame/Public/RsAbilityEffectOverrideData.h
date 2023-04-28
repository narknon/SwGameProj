#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RsAbilityEffectOverrideData.generated.h"

class URsAbilityEffect;

USTRUCT(BlueprintType)
struct FRsAbilityEffectOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAbilityEffect> EffectToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideChildren;
    
    SWGAME_API FRsAbilityEffectOverrideData();
};

