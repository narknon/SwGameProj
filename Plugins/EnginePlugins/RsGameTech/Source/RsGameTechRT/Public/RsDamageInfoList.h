#pragma once
#include "CoreMinimal.h"
#include "RsDamageInfo.h"
#include "RsDamageInfoList.generated.h"

USTRUCT(BlueprintType)
struct FRsDamageInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsDamageInfo> DamageInfos;
    
    RSGAMETECHRT_API FRsDamageInfoList();
};

