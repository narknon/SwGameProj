#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "RsCameraAnimationData.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsCameraAnimationData : public FRsCharacterAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayAsChildOfHero;
    
    FRsCameraAnimationData();
};

