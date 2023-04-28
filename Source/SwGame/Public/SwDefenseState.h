#pragma once
#include "CoreMinimal.h"
#include "ERsCombatDefenseSuccessType.h"
#include "ERsCombatState.h"
#include "RsCombatState.h"
#include "RsDamageParams.h"
#include "SwDefenseState.generated.h"

class AActor;
class ARsCharacter;

UCLASS(Blueprintable)
class USwDefenseState : public URsCombatState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefenseActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCombatState::Type> ConfigurableDefenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTickImplemetation;
    
public:
    USwDefenseState();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickDefense(ARsCharacter* TheDefender, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndDefense(ARsCharacter* TheDefender);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TEnumAsByte<ERsCombatDefenseSuccessType> OnDefenseSuccess(ARsCharacter* TheDefender, const FRsDamageParams& DamageInfo, ARsCharacter* AttackingCharacter, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefenseAborted(ARsCharacter* TheDefender);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginDefense(ARsCharacter* TheDefender);
    
};

