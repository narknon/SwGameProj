#pragma once
#include "CoreMinimal.h"
#include "RsAbility.h"
#include "SwForceLiftUpgradeData.h"
#include "SwForceMeterRow.h"
#include "SwLiftAnimationData.h"
#include "SwMassLiftUpgradeData.h"
#include "SwForceLiftAbility.generated.h"

class UAkAudioEvent;
class UAnimMontage;
class UNiagaraSystem;

UCLASS(Blueprintable)
class SWGAME_API USwForceLiftAbility : public URsAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceMeterRow ForceMeterRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwLiftAnimationData LiftAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FailureAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioFail;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceLiftUpgradeData UpgradeData[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMassLiftUpgradeData MassLiftUpgradeData[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComboWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckToSeeIfFocusingOnTopOfTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrapolationToCheckOnTopOfTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* MassLiftParticleToSpawn;
    
    USwForceLiftAbility();
};

