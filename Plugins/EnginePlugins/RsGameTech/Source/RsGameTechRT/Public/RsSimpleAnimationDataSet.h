#pragma once
#include "CoreMinimal.h"
#include "RsSimpleAnimationData.h"
#include "RsSimpleAnimationDataSet.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsSimpleAnimationDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsSimpleAnimationData> Animations;
    
    FRsSimpleAnimationDataSet();
};

