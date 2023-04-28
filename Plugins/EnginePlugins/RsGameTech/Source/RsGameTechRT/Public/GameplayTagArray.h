#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagArray.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FGameplayTagArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Tags;
    
    FGameplayTagArray();
};

