#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_UINavigationInput.generated.h"

USTRUCT(BlueprintType)
struct FRsBitfield_UINavigationInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    RSGAMETECHRT_API FRsBitfield_UINavigationInput();
};

