#pragma once
#include "CoreMinimal.h"
#include "RsRange.h"
#include "RsCharacterWallConnectionValidationParams.generated.h"

USTRUCT(BlueprintType)
struct FRsCharacterWallConnectionValidationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsRange WallRelativeFacingAngleRangeDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputMinimumThreshold;
    
    RSGAMETECHRT_API FRsCharacterWallConnectionValidationParams();
};

