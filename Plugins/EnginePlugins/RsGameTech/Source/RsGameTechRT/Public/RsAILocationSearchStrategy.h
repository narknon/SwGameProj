#pragma once
#include "CoreMinimal.h"
#include "ERsAIDistancePolicy.h"
#include "RsAILocationSearchStrategy.generated.h"

USTRUCT(BlueprintType)
struct FRsAILocationSearchStrategy {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIDistancePolicy::Type> DistancePolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresLOS: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMustBeInViewFrustum: 1;
    
    RSGAMETECHRT_API FRsAILocationSearchStrategy();
};

