#pragma once
#include "CoreMinimal.h"
#include "RsDamageInfoList.h"
#include "RsFrameDamageTracker.generated.h"

USTRUCT(BlueprintType)
struct FRsFrameDamageTracker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRsDamageInfoList> FrameDamageInfoMap;
    
public:
    RSGAMETECHRT_API FRsFrameDamageTracker();
};

