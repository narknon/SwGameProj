#pragma once
#include "CoreMinimal.h"
#include "RsSimpleAnimationDataBase.h"
#include "RsSimpleAnimationData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsSimpleAnimationData : public FRsSimpleAnimationDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    FRsSimpleAnimationData();
};

