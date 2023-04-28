#pragma once
#include "CoreMinimal.h"
#include "EffectData.generated.h"

class URsAbilityEffect;

USTRUCT(BlueprintType)
struct FEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsAbilityEffect* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* EffectType;
    
    SWGAME_API FEffectData();
};

