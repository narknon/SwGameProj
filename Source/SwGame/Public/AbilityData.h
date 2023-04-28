#pragma once
#include "CoreMinimal.h"
#include "AbilityData.generated.h"

class URsAbility;

USTRUCT(BlueprintType)
struct FAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsAbility* Ability;
    
    SWGAME_API FAbilityData();
};

