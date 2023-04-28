#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_NavState.generated.h"

USTRUCT(BlueprintType)
struct FRsBitfield_NavState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    RSGAMETECHRT_API FRsBitfield_NavState();
};

