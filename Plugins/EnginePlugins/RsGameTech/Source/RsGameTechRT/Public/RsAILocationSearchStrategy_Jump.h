#pragma once
#include "CoreMinimal.h"
#include "ERsAILocationSearchStrategyRelativeToTargetOrSelf.h"
#include "RsAIDistanceScoreRange.h"
#include "RsAILocationSearchStrategy_Jump.generated.h"

USTRUCT(BlueprintType)
struct FRsAILocationSearchStrategy_Jump {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAILocationSearchStrategyRelativeToTargetOrSelf::Type> CastOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CastHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathGroundClearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CastArcBonusHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathCurveFullness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathCurveRoll;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresLOS_SelfToPoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresLOS_TargetToPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAIDistanceScoreRange> DistanceToSelfScoreRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAIDistanceScoreRange> DistanceToTargetScoreRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAngleScoring_ScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAngleScoring_Angle;
    
    RSGAMETECHRT_API FRsAILocationSearchStrategy_Jump();
};

