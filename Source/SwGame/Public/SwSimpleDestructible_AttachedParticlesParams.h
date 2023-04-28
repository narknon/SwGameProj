#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_AttachedParticlesParams.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_AttachedParticlesParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSpawningAttachedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraParticleSystemToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentNameToAttachTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBonesNamePrefix;
    
    FSwSimpleDestructible_AttachedParticlesParams();
};

