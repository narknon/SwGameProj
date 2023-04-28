#pragma once
#include "CoreMinimal.h"
#include "RsDamageFromPhysicsCollisionMassLimits.generated.h"

USTRUCT(BlueprintType)
struct FRsDamageFromPhysicsCollisionMassLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMassLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumMass;
    
    RSGAMETECHRT_API FRsDamageFromPhysicsCollisionMassLimits();
};

