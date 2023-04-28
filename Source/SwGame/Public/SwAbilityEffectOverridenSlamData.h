#pragma once
#include "CoreMinimal.h"
#include "ESwSlamEnterModifierType.h"
#include "SwAbilityEffectOverridenSlamData.generated.h"

USTRUCT(BlueprintType)
struct FSwAbilityEffectOverridenSlamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwSlamEnterModifierType EnterModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StruggleDuration;
    
    SWGAME_API FSwAbilityEffectOverridenSlamData();
};

