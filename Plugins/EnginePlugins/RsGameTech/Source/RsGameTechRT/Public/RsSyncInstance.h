#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Rs/MontageBlendSettings.h"
#include "ERsBreakSyncType.h"
#include "RsCameraAnimationData.h"
#include "RsCharacterAnimationData.h"
#include "RsOnSyncAnimStartedDelegateDelegate.h"
#include "RsOnSyncEndingDelegateDelegate.h"
#include "RsOnSyncStoppedMulticastDelegateDelegate.h"
#include "RsOnTakeSyncDamageDelegateDelegate.h"
#include "RsSyncInstance.generated.h"

class AActor;
class AController;
class UAnimMontage;
class UAnimationAsset;
class UDamageType;

UCLASS(Blueprintable)
class URsSyncInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndSyncOnMontageBlendingOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysTickPoseAndRefreshBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopAnimationOnSyncEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHeroOnGroundFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageBlendSettings BlendInSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageBlendSettings BlendOutSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData DeathAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraAnimationData CameraAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustSyncLocationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNavIgnoreZ;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnSyncStoppedMulticastDelegate OnSyncStoppedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnSyncEndingDelegate OnSyncEnding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnTakeSyncDamageDelegate OnTakeSyncDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnSyncAnimStartedDelegate OnSyncAnimStarted;
    
    URsSyncInstance();
    UFUNCTION(BlueprintCallable)
    void StopSync(bool bKeepPlayingMontage);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakOnTakeDamage(TEnumAsByte<ERsBreakSyncType> BreakType);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyDamageSetDeathAnimation(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyDamageInstance(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyDamageAll(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEndedInstance(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEndedAll(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    bool IsSyncStopped();
    
};

