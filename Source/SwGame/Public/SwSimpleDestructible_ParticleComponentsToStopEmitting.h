#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_ParticleComponentsToStopEmitting.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_ParticleComponentsToStopEmitting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NiagaraParticleComponentsToStopEmitting;
    
    FSwSimpleDestructible_ParticleComponentsToStopEmitting();
};

