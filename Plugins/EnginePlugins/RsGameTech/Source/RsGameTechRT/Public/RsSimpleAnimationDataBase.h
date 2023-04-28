#pragma once
#include "CoreMinimal.h"
#include "RsSimpleAnimationDataBase.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsSimpleAnimationDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    FRsSimpleAnimationDataBase();
};

