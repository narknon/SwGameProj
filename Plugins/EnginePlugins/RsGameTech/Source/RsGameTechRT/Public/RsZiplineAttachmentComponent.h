#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERsNavState.h"
#include "ERsZiplineAnimationState.h"
#include "ERsZiplineAttachmentState.h"
#include "ERsZiplineMovementDirection.h"
#include "ERsZiplineMovementMode.h"
#include "RsCharacterNavigationComponent.h"
#include "RsZiplineAttachmentComponent.generated.h"

class AActor;
class AController;
class ARsCharacter;
class UDamageType;
class URsHeroStateModifierDefinition;
class URsZiplineAttachmentSettings;
class URsZiplineManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsZiplineAttachmentComponent : public URsCharacterNavigationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsZiplineAttachmentSettings* m_settings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsZiplineManager* m_ziplineManager;
    
public:
    URsZiplineAttachmentComponent();
    UFUNCTION(BlueprintCallable)
    void ZiplineJumpInputPressed();
    
    UFUNCTION(BlueprintCallable)
    void ZiplineEntryComplete();
    
    UFUNCTION(BlueprintCallable)
    bool ZiplineChangeDirectionInputPressed();
    
    UFUNCTION(BlueprintCallable)
    bool TryAttachToZiplineAtLocation(const FTransform& searchTransform, const float SearchRadius, bool bDebug, float debugLifetime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowGripInputUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseGrip() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAllowChangeOfDirection() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDesiredMovementDirection(ERsZiplineMovementDirection MovementDirection, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseZipline();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnZiplineJumpModifierRemoved(URsHeroStateModifierDefinition* HeroStateModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnZiplineDisableModifierRemoved(URsHeroStateModifierDefinition* HeroStateModifier);
    
public:
    UFUNCTION(BlueprintCallable)
    bool OnPlayerJumpToZiplineInputPressed();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNavStateChanged(ERsNavState NewState, ERsNavState PrevState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementModeChanged(ERsZiplineMovementMode oldMovementMode, ERsZiplineMovementMode NewMovementMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementDirectionChanged(ERsZiplineMovementDirection MovementDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitZipline();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterZipline();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterInterrupted(ARsCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInState(const ERsZiplineAttachmentState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMovementMode(const ERsZiplineMovementMode Mode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyStopped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBraking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBoosting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideGripInputUI();
    
    UFUNCTION(BlueprintCallable)
    bool HasZiplineNearLocation(const FVector Location, const float SearchRadius, bool bExcludeCurrentZipline, bool bDebug, float debugLifetime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GripIsConfirm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZiplineMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZiplineCurrentSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsZiplineAttachmentState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentProgressionAlongZipline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsZiplineMovementMode GetCurrentMovementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsZiplineMovementDirection GetCurrentMovementDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsZiplineAnimationState GetCurrentAnimState() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableOverrideZiplineSearchRangeMultiplier(float searchRangeMultiplier, float overrideTime);
    
    UFUNCTION(BlueprintCallable)
    void DoZiplineJump();
    
    UFUNCTION(BlueprintCallable)
    void DoSidewaysZiplineJump();
    
    UFUNCTION(BlueprintCallable)
    void DisableOverrideZiplineSearchRangeMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanZiplineJump(FName ActionName) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanZipline() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ZiplineAttachedTick(float Dt);
    
};

