#pragma once
#include "CoreMinimal.h"
#include "ERsAILocationSearchStrategyRelativeToTargetOrSelf.h"
#include "RsAIDistanceScoreRange.h"
#include "RsAILocationSearchStrategy_AerialLOS.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAILocationSearchStrategy_AerialLOS {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAILocationSearchStrategyRelativeToTargetOrSelf::Type> CastOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CastHeightOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresLOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAIDistanceScoreRange> DistanceToSelfScoreRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAIDistanceScoreRange> DistanceToTargetScoreRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAngleScoring_ScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAngleScoring_Angle;
    
    FRsAILocationSearchStrategy_AerialLOS();
};

