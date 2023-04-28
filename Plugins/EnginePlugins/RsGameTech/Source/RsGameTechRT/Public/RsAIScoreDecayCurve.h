#pragma once
#include "CoreMinimal.h"
#include "ERsAICurveType.h"
#include "RsAIScoreDecayCurve.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIScoreDecayCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAICurveType::Type> CurveType;
    
    FRsAIScoreDecayCurve();
};

