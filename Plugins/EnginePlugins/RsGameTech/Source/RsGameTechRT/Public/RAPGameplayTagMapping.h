#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RAPGameplayTagMapping.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRAPGameplayTagMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> Mapping;
    
    FRAPGameplayTagMapping();
};

