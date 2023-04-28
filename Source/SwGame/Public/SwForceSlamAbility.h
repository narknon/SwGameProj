#pragma once
#include "CoreMinimal.h"
#include "RsAbility.h"
#include "SwForceMeterRow.h"
#include "SwForceSlamUpgradeData.h"
#include "SwMassSlamUpgradeData.h"
#include "SwSlamAnimationData.h"
#include "SwForceSlamAbility.generated.h"

class UAkAudioEvent;
class UAnimMontage;

UCLASS(Blueprintable)
class SWGAME_API USwForceSlamAbility : public URsAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceMeterRow SlamMeterRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSlamAnimationData Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FailureAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioFail;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceSlamUpgradeData UpgradeData[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMassSlamUpgradeData MassSlamUpgradeData[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComboWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerDuration;
    
    USwForceSlamAbility();
};

