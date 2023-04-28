#pragma once
#include "CoreMinimal.h"
#include "RsCharacterBlockDamageModifiers.generated.h"

USTRUCT(BlueprintType)
struct FRsCharacterBlockDamageModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostMultiplierBlockDamageAdjustment;
    
    RSGAMETECHRT_API FRsCharacterBlockDamageModifiers();
};

