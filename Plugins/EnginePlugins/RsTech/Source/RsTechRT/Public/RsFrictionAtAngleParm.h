#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsRange.h"
#include "RsFrictionAtAngleParm.generated.h"

USTRUCT(BlueprintType)
struct FRsFrictionAtAngleParm : public FRsRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpeedAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpeedAtEnd;
    
    RSTECHRT_API FRsFrictionAtAngleParm();
};

