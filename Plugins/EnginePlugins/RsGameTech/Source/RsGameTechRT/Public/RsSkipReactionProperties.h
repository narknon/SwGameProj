#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RsSkipReactionProperties.generated.h"

class UDamageType;

USTRUCT(BlueprintType)
struct FRsSkipReactionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowReactionOnForceSlow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowReactionOnBlockBreak: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowReactionOnUnblockable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipOnParryReactions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> ExcludedDamageClasses;
    
    RSGAMETECHRT_API FRsSkipReactionProperties();
};

