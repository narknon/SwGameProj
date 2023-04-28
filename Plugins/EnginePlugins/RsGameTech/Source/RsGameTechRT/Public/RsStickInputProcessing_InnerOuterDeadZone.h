#pragma once
#include "CoreMinimal.h"
#include "RsStickInputProcessing_InnerOuterDeadZone.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsStickInputProcessing_InnerOuterDeadZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNonDeadZoneInputReNormalized;
    
    FRsStickInputProcessing_InnerOuterDeadZone();
};

