#pragma once
#include "CoreMinimal.h"
#include "RsJumpData.generated.h"

USTRUCT(BlueprintType)
struct FRsJumpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimRootMotion;
    
    RSGAMETECHRT_API FRsJumpData();
};

