#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_HeroInputFlags.generated.h"

USTRUCT(BlueprintType)
struct FRsBitfield_HeroInputFlags {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    RSGAMETECHRT_API FRsBitfield_HeroInputFlags();
};

