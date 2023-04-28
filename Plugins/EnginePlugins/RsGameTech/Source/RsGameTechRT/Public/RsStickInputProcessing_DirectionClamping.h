#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsStickInputProcessing_DirectionClamping.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsStickInputProcessing_DirectionClamping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleToClamp;
    
    FRsStickInputProcessing_DirectionClamping();
};

