#pragma once
#include "CoreMinimal.h"
#include "RsBlueprintableAIDeferredCommandUID.generated.h"

USTRUCT(BlueprintType)
struct FRsBlueprintableAIDeferredCommandUID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 AIDeferredCommandUID;
    
    RSGAMETECHRT_API FRsBlueprintableAIDeferredCommandUID();
};

