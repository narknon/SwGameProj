#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_HeroBufferFlags.generated.h"

USTRUCT(BlueprintType)
struct FRsBitfield_HeroBufferFlags {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    RSGAMETECHRT_API FRsBitfield_HeroBufferFlags();
};

