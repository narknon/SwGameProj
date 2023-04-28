#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SwSimpleDestructible_AttachedParticlesParams.h"
#include "SwSimpleDestructible_ParticlesToSpawnOnDestruction.generated.h"

class UNiagaraSystem;
class UParticleSystem;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_ParticlesToSpawnOnDestruction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystemToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraParticleSystemToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LocalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_AttachedParticlesParams AttachedParticles;
    
    FSwSimpleDestructible_ParticlesToSpawnOnDestruction();
};

