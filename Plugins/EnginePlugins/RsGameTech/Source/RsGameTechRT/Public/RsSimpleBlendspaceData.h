#pragma once
#include "CoreMinimal.h"
#include "RsSimpleAnimationDataBase.h"
#include "RsSimpleBlendspaceData.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsSimpleBlendspaceData : public FRsSimpleAnimationDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* Animation;
    
    FRsSimpleBlendspaceData();
};

