#pragma once
#include "CoreMinimal.h"
#include "R4CameraBehavior_CollisionTrace.h"
#include "R4CameraBehavior_CollisionWhiskers.generated.h"

UCLASS(Blueprintable)
class UR4CameraBehavior_CollisionWhiskers : public UR4CameraBehavior_CollisionTrace {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetSmoothingPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetSmoothingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDisableCollisionSphereOffset;
    
public:
    UR4CameraBehavior_CollisionWhiskers();
};

