#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ERsAttackSwingDirection.h"
#include "ERsAttackerDirection.h"
#include "RsHitEvent.h"
#include "RsDamageParams.generated.h"

class UPhysicalMaterial;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsDamageParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> DamagedActorCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAttackSwingDirection SwingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAttackerDirection AttackerDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttackerDirectionVector;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> InstigatingCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPhysicalMaterial> HitPhysMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHitEvent HitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitSweep;
    
    FRsDamageParams();
};

