#pragma once
#include "CoreMinimal.h"
#include "ERsConstrainedJumpDirection.h"
#include "RsDisabledConstrainedJumpDirections.generated.h"

USTRUCT(BlueprintType)
struct FRsDisabledConstrainedJumpDirections {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERsConstrainedJumpDirection> DisabledDirections;
    
    RSGAMETECHRT_API FRsDisabledConstrainedJumpDirections();
};

