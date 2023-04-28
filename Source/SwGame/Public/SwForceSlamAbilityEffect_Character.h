#pragma once
#include "CoreMinimal.h"
#include "SwForceSlamAbilityEffect.h"
#include "SwForceSlamAbilityEffect_Character.generated.h"

class UNiagaraSystem;
class URsDamageType;

UCLASS(Blueprintable)
class USwForceSlamAbilityEffect_Character : public USwForceSlamAbilityEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HitGroundParticleToSpawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsDamageType* SlamDamageTypeInst;
    
public:
    USwForceSlamAbilityEffect_Character();
};

