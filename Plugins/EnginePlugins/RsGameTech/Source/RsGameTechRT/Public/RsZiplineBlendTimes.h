#pragma once
#include "CoreMinimal.h"
#include "RsZiplineBlendTimes.generated.h"

USTRUCT(BlueprintType)
struct FRsZiplineBlendTimes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrientationBlendInTime;
    
    RSGAMETECHRT_API FRsZiplineBlendTimes();
};

