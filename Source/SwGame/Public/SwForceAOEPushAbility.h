#pragma once
#include "CoreMinimal.h"
#include "RsAbility.h"
#include "SwForceAOEPushUpgradeData.h"
#include "SwForceMeterRow.h"
#include "SwForceAOEPushAbility.generated.h"

class UAkAudioEvent;
class UAnimMontage;

UCLASS(Blueprintable)
class SWGAME_API USwForceAOEPushAbility : public URsAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceMeterRow ForceMeterRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceMeterRow ForceMeterPullPushRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SuccessAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FailAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioCastStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioCastStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioFail;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceAOEPushUpgradeData UpgradeData[3];
    
    USwForceAOEPushAbility();
};

