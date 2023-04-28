#pragma once
#include "CoreMinimal.h"
#include "RsClosedCaptionCommonSubtitleData.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsClosedCaptionCommonSubtitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubtitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationOverride;
    
    FRsClosedCaptionCommonSubtitleData();
};

