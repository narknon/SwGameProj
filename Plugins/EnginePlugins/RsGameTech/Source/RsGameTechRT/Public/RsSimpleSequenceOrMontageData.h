#pragma once
#include "CoreMinimal.h"
#include "RsSimpleAnimationDataBase.h"
#include "RsSimpleSequenceOrMontageData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsSimpleSequenceOrMontageData : public FRsSimpleAnimationDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    FRsSimpleSequenceOrMontageData();
};

