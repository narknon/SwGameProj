#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsTagQuerySet_QueryInfo.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsTagQuerySet_QueryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResultName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FBoolProperty> ResultProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Query;
    
    FRsTagQuerySet_QueryInfo();
};

