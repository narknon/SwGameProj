#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_HeroLoadoutFlags.generated.h"

USTRUCT(BlueprintType)
struct FRsBitfield_HeroLoadoutFlags {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    RSGAMETECHRT_API FRsBitfield_HeroLoadoutFlags();
};

