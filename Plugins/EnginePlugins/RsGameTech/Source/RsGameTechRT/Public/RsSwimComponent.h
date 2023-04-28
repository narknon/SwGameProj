#pragma once
#include "CoreMinimal.h"
#include "ERsNavState.h"
#include "ERsSwimState.h"
#include "RsCharacterNavigationComponent.h"
#include "RsSwimComponentOnSwimStateChangedSignatureDelegate.h"
#include "RsSwimComponent.generated.h"

class ARsCharacter;
class ARsNavVolume;
class URsSwimSettingsDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsSwimComponent : public URsCharacterNavigationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSwimComponentOnSwimStateChangedSignature OnSwimStateChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSwimSettingsDefinition* SwimDefinition;
    
public:
    URsSwimComponent();
    UFUNCTION(BlueprintCallable)
    void SwitchDirectlyToDivingInNextVolume();
    
    UFUNCTION(BlueprintCallable)
    void StartPlayingUnderwaterBoostAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StartDivingButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void StartDivingButtonPushed();
    
    UFUNCTION(BlueprintCallable)
    void StartDivingButtonHeld();
    
    UFUNCTION(BlueprintCallable)
    void StartDiving();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldExitSwimmingInVolume();
    
    UFUNCTION(BlueprintCallable)
    bool SetDesiredState(ERsSwimState DesiredState);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOverrideForDownwardAndUpwardSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OverrideDownwardAndUpwardSpeed(float newDownwardSpeed, float newUpwardSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwimStateChanged(const ERsSwimState previousSwimState, const ERsSwimState newSwimState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNavStateExited(ERsNavState NewState, ERsNavState PrevState);
    
    UFUNCTION(BlueprintCallable)
    void OnIsInWaterStateChanged(ARsCharacter* RsCharacter, ARsNavVolume* Volume, bool bIsInWater, bool bWasInWater);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderwaterBoostAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaterVolumeSurfaceZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsSwimState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnticipateSwimAfterCinematic() const;
    
    UFUNCTION(BlueprintCallable)
    void DiveUpwardButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void DiveUpwardButtonPushed();
    
    UFUNCTION(BlueprintCallable)
    void DiveDownwardButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void DiveDownwardButtonPushed();
    
    UFUNCTION(BlueprintCallable)
    void AnticipateSwimAfterCinematic();
    
};

