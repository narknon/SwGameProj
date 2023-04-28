#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "RsHeroComponent.h"
#include "ESwDFXState.h"
#include "ESwDFXType.h"
#include "Templates/SubclassOf.h"
#include "SwDeathFromXComponent.generated.h"

class ASwHero;
class URsHeroStateModifierDefinition;
class USceneComponent;
class USwDFXStateHandler;
class USwDFXStateHandler_Backstab;
class USwDFXStateHandler_ClimbAbove;
class USwDFXStateHandler_EdgeAbove;
class USwDFXStateHandler_FallAbove;
class USwDFXStateHandler_LedgeBelow;
class USwDFXStateHandler_MountAbove;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwDeathFromXComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IsInDFXGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IsInPreDeathGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* NoExtCancelModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwDFXStateHandler_LedgeBelow> LedgeBelow_Handler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwDFXStateHandler_ClimbAbove> ClimbAbove_Handler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwDFXStateHandler_FallAbove> FallAbove_Handler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwDFXStateHandler_EdgeAbove> EdgeAbove_Handler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwDFXStateHandler_MountAbove> MountAbove_Handler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USwDFXStateHandler_Backstab> Backstab_Handler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValidEdgeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASwHero* SwHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasClosestEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ClosestEdgePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ClosestEdgeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDFXStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTargetLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDFXFinishedWithAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDFXFinishedWithSyncAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESwDFXState CurrentDFXState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USwDFXStateHandler*> DFXHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESwDFXType DFXType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAttackStarted;
    
public:
    USwDeathFromXComponent();
    UFUNCTION(BlueprintCallable)
    void StartDFX();
    
    UFUNCTION(BlueprintCallable)
    ESwDFXState StartAttack();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowIcon(const USceneComponent* InSceneComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDFXBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDFXAttackBP();
    
    UFUNCTION(BlueprintCallable)
    void OnHeroStateModifierRemoved(URsHeroStateModifierDefinition* HeroStateModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishDFXBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishDFX();
    
    UFUNCTION(BlueprintCallable)
    void OnDFXSyncAttackStartedBP();
    
    UFUNCTION(BlueprintCallable)
    void OnDFXGenericAttackStartedBP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LockTarget(bool bInIsTargetLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetValid(USceneComponent* InSceneComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDFXStarted() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideIcon(const USceneComponent* InSceneComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetTargetCommonOverride();
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishDFX();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanDoDFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDoAction(FName ActionName) const;
    
};

