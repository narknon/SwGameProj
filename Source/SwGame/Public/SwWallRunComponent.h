#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsCharacterWallSide.h"
#include "ERsWallRunEndReason.h"
#include "RsWallRunComponent.h"
#include "ERsTopologyMode.h"
#include "ESwWallRunState.h"
#include "SwWallRunComponent.generated.h"

class AActor;
class AController;
class ARsCharacter;
class UDamageType;
class URsHeroStateModifierDefinition;
class USwWallRunSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwWallRunComponent : public URsWallRunComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwWallRunSettings* Settings;
    
    USwWallRunComponent();
    UFUNCTION(BlueprintCallable)
    void TriggerTransitionToWallHang();
    
    UFUNCTION(BlueprintCallable)
    void SetWallRunState(const ESwWallRunState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallRunExpiredEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallRunExpiredBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallRunEnd(const ERsWallRunEndReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallRunJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallRunFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsWallRunAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWallRunExpired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWallRunTotalTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwWallRunState GetWallRunState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsCharacterWallSide GetWallRunSide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWallRunRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWallRunMovementDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWallRunExpiredElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWallRunElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWallRunAbsoluteElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWallNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetViewDirection() const;
    
    UFUNCTION(BlueprintCallable)
    void EndWallRun(const ERsWallRunEndReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTransitionToWallHang() const;
    
    UFUNCTION(BlueprintCallable)
    bool BeginWallRun(const ERsCharacterWallSide WallSide, const bool bShouldHaveInputGracePeriod);
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnWallTopologyChange(const ERsTopologyMode PrevMode, const ERsTopologyMode newMode, const float Proximity);
    
    UFUNCTION(BlueprintCallable)
    void _OnWallRunFallHeroStateModifierRemoved(URsHeroStateModifierDefinition* fallModifier);
    
    UFUNCTION(BlueprintCallable)
    void _OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void _OnGroundTopologyChange(const ERsTopologyMode PrevMode, const ERsTopologyMode newMode, const float Proximity);
    
    UFUNCTION(BlueprintCallable)
    void _OnCharacterInterrupted(ARsCharacter* myCharacter);
    
};

