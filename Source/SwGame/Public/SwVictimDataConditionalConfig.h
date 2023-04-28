#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESwAirConditionalType.h"
#include "ESwConditionalEvaluationType.h"
#include "ESwDarkModeConditionalType.h"
#include "ESwPullConditionalType.h"
#include "ESwSlowConditionalType.h"
#include "SwVictimDataConditionalConfig.generated.h"

USTRUCT(BlueprintType)
struct FSwVictimDataConditionalConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwConditionalEvaluationType EvaluationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwAirConditionalType AirConditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwDarkModeConditionalType DarkModeConditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwSlowConditionalType SlowConditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwPullConditionalType PullConditional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredUserTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredVictimTags;
    
    SWGAME_API FSwVictimDataConditionalConfig();
};

