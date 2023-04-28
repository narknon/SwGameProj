#pragma once
#include "CoreMinimal.h"
#include "RsCharacterWallConnectionTypeParams_WallRunOnly.generated.h"

USTRUCT(BlueprintType)
struct FRsCharacterWallConnectionTypeParams_WallRunOnly {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInputAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhaseDashMaxInputAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleDifferenceBetweenInputAndFacingDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleDifferenceBetweenInputAndMovementDir;
    
    RSGAMETECHRT_API FRsCharacterWallConnectionTypeParams_WallRunOnly();
};

