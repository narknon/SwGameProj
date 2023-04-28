#pragma once
#include "CoreMinimal.h"
#include "ERsAIBlendspaceInputSource.h"
#include "RsHitEvent.h"
#include "SwButtonMashConfiguration.h"
#include "SwGrabWhiffAttackState.h"
#include "SwGrabButtonMashState.generated.h"

class URsDamageType;
class URsSyncDefinition;

UCLASS(Blueprintable, EditInlineNew)
class SWGAME_API USwGrabButtonMashState : public USwGrabWhiffAttackState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwButtonMashConfiguration ButtonMashConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonMashActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSyncDefinition* SuccessSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIBlendspaceInputSource::Type> SuccessBlendSpaceInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwapMasterAndSlaveForSyncForSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSyncDefinition* FailSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIBlendspaceInputSource::Type> FailBlendSpaceInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwapMasterAndSlaveForSyncForFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDealDamageOnFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHitEvent HitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsDamageType* DamageType;
    
public:
    USwGrabButtonMashState();
    UFUNCTION(BlueprintCallable)
    void StartButtonMash();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonMashSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonMashFailure();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonMashEnd();
    
    UFUNCTION(BlueprintCallable)
    void FailButtonMash();
    
    UFUNCTION(BlueprintCallable)
    void ButtonMashSuccess();
    
    UFUNCTION(BlueprintCallable)
    void ButtonMashCleanup();
    
};

