#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_HeroUpgradeFlags.generated.h"

USTRUCT(BlueprintType)
struct FRsBitfield_HeroUpgradeFlags {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    RSGAMETECHRT_API FRsBitfield_HeroUpgradeFlags();
};

