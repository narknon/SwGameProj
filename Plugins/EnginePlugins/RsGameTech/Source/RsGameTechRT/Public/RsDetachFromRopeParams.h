#pragma once
#include "CoreMinimal.h"
#include "RsDetachFromRopeParams.generated.h"

USTRUCT(BlueprintType)
struct FRsDetachFromRopeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUnstretchRope: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetNavState: 1;
    
    RSGAMETECHRT_API FRsDetachFromRopeParams();
};

