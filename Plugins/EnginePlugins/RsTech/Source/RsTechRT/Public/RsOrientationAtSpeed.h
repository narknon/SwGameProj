#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsOrientationAtSpeed.generated.h"

USTRUCT(BlueprintType)
struct FRsOrientationAtSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator OrientationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearSpeed;
    
    RSTECHRT_API FRsOrientationAtSpeed();
};

