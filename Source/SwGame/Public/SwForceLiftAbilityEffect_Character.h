#pragma once
#include "CoreMinimal.h"
#include "SwForceLiftAbilityEffect.h"
#include "SwForceLiftAbilityEffect_Character.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class USwForceLiftAbilityEffect_Character : public USwForceLiftAbilityEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ParticleToSpawn;
    
    USwForceLiftAbilityEffect_Character();
};

