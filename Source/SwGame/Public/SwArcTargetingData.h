#pragma once
#include "CoreMinimal.h"
#include "SwTargetingArc.h"
#include "SwTargetingProfileData.h"
#include "SwArcTargetingData.generated.h"

USTRUCT(BlueprintType)
struct FSwArcTargetingData : public FSwTargetingProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwTargetingArc Arc1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwTargetingArc Arc2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwTargetingArc Arc3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProximityWeightNoInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProximityWeightWithInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSearchInInputDirection;
    
    SWGAME_API FSwArcTargetingData();
};

