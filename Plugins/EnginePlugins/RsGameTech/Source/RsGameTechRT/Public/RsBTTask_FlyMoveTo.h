#pragma once
#include "CoreMinimal.h"
#include "RsBTTask_DirectMoveToBlackboardBase.h"
#include "RsBTTask_FlyMoveTo.generated.h"

UCLASS(Blueprintable)
class URsBTTask_FlyMoveTo : public URsBTTask_DirectMoveToBlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcBonusHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathGroundClearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathCurveFullness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathCurveRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathCornerSmoothing;
    
    URsBTTask_FlyMoveTo();
};

