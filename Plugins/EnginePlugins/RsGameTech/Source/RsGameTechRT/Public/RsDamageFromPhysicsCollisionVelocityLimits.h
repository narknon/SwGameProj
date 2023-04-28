#pragma once
#include "CoreMinimal.h"
#include "RsDamageFromPhysicsCollisionVelocityLimits.generated.h"

USTRUCT(BlueprintType)
struct FRsDamageFromPhysicsCollisionVelocityLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseVelocityLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumVelocity;
    
    RSGAMETECHRT_API FRsDamageFromPhysicsCollisionVelocityLimits();
};

