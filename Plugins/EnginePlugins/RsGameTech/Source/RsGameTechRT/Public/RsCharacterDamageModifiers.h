#pragma once
#include "CoreMinimal.h"
#include "RsCharacterDamageModifiers.generated.h"

USTRUCT(BlueprintType)
struct FRsCharacterDamageModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostMultiplierDamageAdjustment;
    
    RSGAMETECHRT_API FRsCharacterDamageModifiers();
};

