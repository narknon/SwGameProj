#pragma once
#include "CoreMinimal.h"
#include "AnimState_Climb_Wall.generated.h"

USTRUCT(BlueprintType)
struct FAnimState_Climb_Wall {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldClimbHang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReachAngle;
    
    RSGAMETECHRT_API FAnimState_Climb_Wall();
};

