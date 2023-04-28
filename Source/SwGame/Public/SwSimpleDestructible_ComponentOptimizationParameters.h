#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_ComponentOptimizationParameters.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_ComponentOptimizationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideBoneOnFirstCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HideBoneAfterNumberCollisionHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleToSpawnAfterHidingBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnOnlyEveryNthParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeBetweenSpawningParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToHideAllBonesAndDeactivateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideComponentAfterDeactivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableAllCollisionsAfterDeactivation;
    
    FSwSimpleDestructible_ComponentOptimizationParameters();
};

