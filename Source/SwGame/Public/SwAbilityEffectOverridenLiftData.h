#pragma once
#include "CoreMinimal.h"
#include "ESwLiftEnterModifierType.h"
#include "SwAbilityEffectOverridenLiftData.generated.h"

USTRUCT(BlueprintType)
struct FSwAbilityEffectOverridenLiftData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwLiftEnterModifierType EnterModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StruggleDuration;
    
    SWGAME_API FSwAbilityEffectOverridenLiftData();
};

