#pragma once
#include "CoreMinimal.h"
#include "RsCharacterWallConnectionTypeParams_WallHangOnly.h"
#include "RsCharacterWallConnectionTypeParams_WallRunAndWallHang.h"
#include "RsCharacterWallConnectionTypeParams_WallRunOnly.h"
#include "RsCharacterWallConnectionTypeParams.generated.h"

USTRUCT(BlueprintType)
struct FRsCharacterWallConnectionTypeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFacingAngleForFacingWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFacingAngleForAlongWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterWallConnectionTypeParams_WallHangOnly WallHangOnlyParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterWallConnectionTypeParams_WallRunOnly WallRunOnlyParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterWallConnectionTypeParams_WallRunAndWallHang WallRunAndWallHangParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstrainedJumpUsesFacingDirAsInput;
    
    RSGAMETECHRT_API FRsCharacterWallConnectionTypeParams();
};

