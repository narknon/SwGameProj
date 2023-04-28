#pragma once
#include "CoreMinimal.h"
#include "SwFloatData.h"
#include "SwForceLiftAbilityEffect.h"
#include "SwLiftAccelerationRuntimeData.h"
#include "SwForceLiftAbilityEffect_LevelObject.generated.h"

class UCurveFloat;
class UNiagaraSystem;

UCLASS(Blueprintable)
class SWGAME_API USwForceLiftAbilityEffect_LevelObject : public USwForceLiftAbilityEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DefaultLiftAccelerationCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwFloatData FloatData[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LiftHeightRaycastSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ParticleToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftAccelerationRuntimeData LiftAccelerationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftAccelerationRuntimeData LiftStruggleAccelerationData;
    
public:
    USwForceLiftAbilityEffect_LevelObject();
};

