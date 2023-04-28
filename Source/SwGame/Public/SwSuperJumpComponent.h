#pragma once
#include "CoreMinimal.h"
#include "RsHeroComponent.h"
#include "ERsTopologyMode.h"
#include "ESwSuperJumpEndChargeReason.h"
#include "ESwSuperJumpState.h"
#include "SwSuperJumpComponent.generated.h"

class AActor;
class AController;
class ARsCharacter;
class UDamageType;
class USwSuperJumpSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwSuperJumpComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwSuperJumpSettings* Settings;
    
    USwSuperJumpComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpEnd(const ESwSuperJumpState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpAscentCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargeEnd(const ESwSuperJumpState State, const ESwSuperJumpEndChargeReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargeCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpDescending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpAscending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChargeComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwSuperJumpState GetState() const;
    
    UFUNCTION(BlueprintCallable)
    void EndJump();
    
    UFUNCTION(BlueprintCallable)
    void EndCharge(const ESwSuperJumpEndChargeReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void BeginJump();
    
    UFUNCTION(BlueprintCallable)
    void BeginCharge();
    
private:
    UFUNCTION(BlueprintCallable)
    void _OnTopologyChange(const ERsTopologyMode PrevMode, const ERsTopologyMode newMode, const float Proximity);
    
    UFUNCTION(BlueprintCallable)
    void _OnTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void _OnCharacterInterrupted(ARsCharacter* InterruptedCharacter);
    
};

