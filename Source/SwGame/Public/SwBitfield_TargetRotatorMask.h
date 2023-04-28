#pragma once
#include "CoreMinimal.h"
#include "SwBitfield_TargetRotatorMask.generated.h"

USTRUCT(BlueprintType)
struct FSwBitfield_TargetRotatorMask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    SWGAME_API FSwBitfield_TargetRotatorMask();
};

