#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "RsCharacterAnimationData.h"
#include "ESwDFXState.h"
#include "Templates/SubclassOf.h"
#include "SwDFXStateHandler.generated.h"

class ASwAICharacter;
class URsSyncDefinition;
class USceneComponent;
class USwAttackState;
class USwDeathFromXComponent;
class USwTargetingProfile;

UCLASS(Blueprintable)
class USwDFXStateHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData AttackAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwAttackState> AttackDescriptionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwTargetingProfile* TargetingProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwAttackState> SyncAttackDescriptionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSawpMasterAndSlave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESwDFXState DFXState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USwDeathFromXComponent* DFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform TargetInitialTransform;
    
public:
    USwDFXStateHandler();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldTryUseSyncAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSyncData(ASwAICharacter* InTarget, URsSyncDefinition* InDyncData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDFXStartBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDFXFinishBP(bool bInFinishedWithAttack, bool bInFinishedWithSyncAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetValid(USceneComponent* InSceneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsHandlerConditionsMetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSyncAttackSyncDefinitionBP(URsSyncDefinition*& OutSyncDef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSyncAttackDescriptionOverrideBP(TSubclassOf<USwAttackState>& OutAttackDescriptionOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAttackDescriptionOverrideBP(TSubclassOf<USwAttackState>& OutAttackDescriptionOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAttackAnimDataBP(FRsCharacterAnimationData& OutAttackAnimData);
    
};

