#pragma once
#include "CoreMinimal.h"
#include "AnimState_Quicksand.generated.h"

USTRUCT(BlueprintType)
struct FAnimState_Quicksand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImmersionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSinking;
    
    RSGAMETECHRT_API FAnimState_Quicksand();
};

