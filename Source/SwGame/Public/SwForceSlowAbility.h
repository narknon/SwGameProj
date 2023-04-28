#pragma once
#include "CoreMinimal.h"
#include "ESwAbilityUpgradeLevel.h"
#include "RsAbility.h"
#include "SwForceMeterRow.h"
#include "SwForceSlowUpgradeData.h"
#include "SwForceSlowAbility.generated.h"

class UAkAudioEvent;
class UAnimMontage;

UCLASS(Blueprintable)
class SWGAME_API USwForceSlowAbility : public URsAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceMeterRow ForceMeterRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EnterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FailureAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionTweakName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioTriggerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioTriggerEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxGroupsSlowed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceSlowUpgradeData UpgradeData[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceSlowUpgradeData DarkModeUpgradeData[3];
    
    USwForceSlowAbility();
    UFUNCTION(BlueprintCallable)
    FSwForceSlowUpgradeData GetSlowUpgradeData(TEnumAsByte<ESwAbilityUpgradeLevel::Type> InUpgradeLevel);
    
};

