#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_ForcePullPhysicsFreezeParameters.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_ForcePullPhysicsFreezeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FreezePhysicsOnForceHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FreezePhysicsLinearMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FreezePhysicsAngularMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToFreezePhysicsOnForceHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeroControlBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlBoneStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlBoneFinishTime;
    
    FSwSimpleDestructible_ForcePullPhysicsFreezeParameters();
};

