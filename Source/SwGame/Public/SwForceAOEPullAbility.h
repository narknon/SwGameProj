#pragma once
#include "CoreMinimal.h"
#include "RsAbility.h"
#include "SwForceAOEPullUpgradeData.h"
#include "SwForceMeterRow.h"
#include "SwForceAOEPullAbility.generated.h"

class UAkAudioEvent;
class UAnimMontage;

UCLASS(Blueprintable)
class USwForceAOEPullAbility : public URsAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceMeterRow ForceMeterRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PullSuccessAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PullFailAnimation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceAOEPullUpgradeData UpgradeData[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ForcePullFailEvent;
    
    USwForceAOEPullAbility();
};

