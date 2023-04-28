#pragma once
#include "CoreMinimal.h"
#include "RsCharacterWallConnectionTypeParams_WallRunAndWallHang.generated.h"

USTRUCT(BlueprintType)
struct FRsCharacterWallConnectionTypeParams_WallRunAndWallHang {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallHangMaxFacingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRunMinimumInputAngleWhenWallHangAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRunMaximumInputAngleWhenWallHangAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRunMaxFacingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRunMinimumInputAngleWhenWallHangDisallowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallRunMaximumInputAngleWhenWallHangDisallowed;
    
    RSGAMETECHRT_API FRsCharacterWallConnectionTypeParams_WallRunAndWallHang();
};

