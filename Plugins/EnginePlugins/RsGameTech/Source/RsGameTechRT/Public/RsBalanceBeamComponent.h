#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBalanceBeamState.h"
#include "ERsMonkeyBeamClimbInputMode.h"
#include "ERsNavState.h"
#include "RsCharacterNavigationComponent.h"
#include "RsOnSwingBeamDirectionChangedDelegate.h"
#include "RsOnSwingBeamStateChangedDelegate.h"
#include "RsBalanceBeamComponent.generated.h"

class AActor;
class AController;
class UAnimMontage;
class UDamageType;
class UPrimitiveComponent;
class URsBalanceBeamSettingsDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsBalanceBeamComponent : public URsCharacterNavigationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnSwingBeamStateChanged OnSwingBeamStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnSwingBeamDirectionChanged OnSwingBeamDirectionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsBalanceBeamSettingsDefinition* BalanceBeamDefinition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TurnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FallMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SwingBeamToOnTopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MonkeyEnterMontage;
    
public:
    URsBalanceBeamComponent();
protected:
    UFUNCTION(BlueprintCallable)
    bool TrySwingBeamJump();
    
    UFUNCTION(BlueprintCallable)
    bool TryStopSwingingOnBeam();
    
    UFUNCTION(BlueprintCallable)
    bool TryStartSwingingOnBeam();
    
    UFUNCTION(BlueprintCallable)
    bool TryJump();
    
    UFUNCTION(BlueprintCallable)
    bool TryDropFromBeam(bool bAllowAllStates);
    
    UFUNCTION(BlueprintCallable)
    bool TryClimb(bool bClimbToRight, bool& OutBlockedByCollision, bool& OutAllowMovingClimb);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeamTransitionOnRightSide() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTurnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnSwingBeamJump();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNavStateExited(ERsNavState NewState, ERsNavState PrevState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGripNeededEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool JustEnteredBeamWithSwing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTurning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwingMovingForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwingingUpToTopOfBeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwingingOnBeamDesired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwingingOnBeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnBalanceBeam() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsClimbingAnimationPlaying() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSwingingToTopTimeElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSwingCharacterAngularSpeedDegrees() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSwingCharacterAngleDegrees() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSwingBeamForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSwingBeamAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlayerFacingDir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsParallelToBeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGripTimerDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardDistanceOnBeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBalanceBeamState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERsMonkeyBeamClimbInputMode> GetClimbFromMonkeyInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetBeamComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBalanceBeamDir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBalanceBeamCenter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAngleOfEntry() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FallToMonkeyBeam(bool bEjectIfBlocked, bool bSkipGripConfirmation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndOnMonkeyBeam(EBalanceBeamState NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndOnBalanceBeam(EBalanceBeamState NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndNotOnBeam(EBalanceBeamState NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndFallingToMonkeyBeam(EBalanceBeamState NextState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndClimbingToBalanceBeam(EBalanceBeamState NextState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwingBeamOnCurrentBeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOnlySwingOnCurrentBeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMonkeyBeamUnderCurrentBeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBalanceBeamWalkOnCurrentBeam() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginOnMonkeyBeam(EBalanceBeamState PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginOnBalanceBeam(EBalanceBeamState PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginNotOnBeam(EBalanceBeamState PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginFallingToMonkeyBeam(EBalanceBeamState PreviousState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginClimbingToBalanceBeam(EBalanceBeamState PreviousState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowSwingJumpBackwards() const;
    
};

