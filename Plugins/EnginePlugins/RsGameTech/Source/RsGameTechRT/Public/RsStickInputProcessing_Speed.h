#pragma once
#include "CoreMinimal.h"
#include "RsStickInputProcessing_Speed.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsStickInputProcessing_Speed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    FRsStickInputProcessing_Speed();
};

