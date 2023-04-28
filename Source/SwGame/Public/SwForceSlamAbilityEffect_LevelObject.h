#pragma once
#include "CoreMinimal.h"
#include "SwFloatData.h"
#include "SwForceSlamAbilityEffect.h"
#include "SwForceSlamAbilityEffect_LevelObject.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class USwForceSlamAbilityEffect_LevelObject : public USwForceSlamAbilityEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwFloatData FloatData[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HitGroundParticleToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlamRaycastLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlamDistanceCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlamTimeoutTime;
    
public:
    USwForceSlamAbilityEffect_LevelObject();
};

