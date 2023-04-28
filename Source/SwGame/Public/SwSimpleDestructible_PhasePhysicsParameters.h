#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_PhasePhysicsParameters.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_PhasePhysicsParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsLinearImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsLinearImpulseRandomVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsAngularImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsAngularImpulseRandomVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StartPhysicsAtTheEndOfAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StartPhysicsOnAttachedComponents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InheritInitialVelocityFromParentComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartPhysicsOnBonesWithPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionalHitImpulseStrength;
    
    FSwSimpleDestructible_PhasePhysicsParameters();
};

