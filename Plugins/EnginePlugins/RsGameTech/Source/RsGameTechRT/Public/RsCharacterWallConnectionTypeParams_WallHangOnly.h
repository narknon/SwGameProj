#pragma once
#include "CoreMinimal.h"
#include "RsCharacterWallConnectionTypeParams_WallHangOnly.generated.h"

USTRUCT(BlueprintType)
struct FRsCharacterWallConnectionTypeParams_WallHangOnly {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFacingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInputAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInputAngleWhenRequired;
    
    RSGAMETECHRT_API FRsCharacterWallConnectionTypeParams_WallHangOnly();
};

