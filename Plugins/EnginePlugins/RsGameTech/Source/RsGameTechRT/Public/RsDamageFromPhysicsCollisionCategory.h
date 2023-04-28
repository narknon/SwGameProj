#pragma once
#include "CoreMinimal.h"
#include "RsDamageFromPhysicsCollisionMassLimits.h"
#include "RsDamageFromPhysicsCollisionVelocityLimits.h"
#include "Templates/SubclassOf.h"
#include "RsDamageFromPhysicsCollisionCategory.generated.h"

class UDamageType;
class URsDamageType;

USTRUCT(BlueprintType)
struct FRsDamageFromPhysicsCollisionCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsDamageFromPhysicsCollisionMassLimits MassLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsDamageFromPhysicsCollisionVelocityLimits VelocityLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthDamageOnPhysicsHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsDamageType* DamageTypeInst;
    
    RSGAMETECHRT_API FRsDamageFromPhysicsCollisionCategory();
};

