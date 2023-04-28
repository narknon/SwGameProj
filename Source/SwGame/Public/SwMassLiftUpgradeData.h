#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SwMassLiftUpgradeData.generated.h"

USTRUCT(BlueprintType)
struct FSwMassLiftUpgradeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalTargetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockTag;
    
    SWGAME_API FSwMassLiftUpgradeData();
};

