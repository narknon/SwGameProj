#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsClosedCaptionCommonSubtitleData.h"
#include "RsClosedCaptionMapping.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsClosedCaptionMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CommonSubtitleIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsClosedCaptionCommonSubtitleData Data;
    
    FRsClosedCaptionMapping();
};

