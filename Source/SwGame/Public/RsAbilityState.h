#pragma once
#include "CoreMinimal.h"
#include "ERsCombatDefenseSuccessType.h"
#include "RsDamageParams.h"
#include "SwAttackState.h"
#include "RsAbilityState.generated.h"

class AActor;
class ARsCharacter;

UCLASS(Blueprintable, EditInlineNew)
class SWGAME_API URsAbilityState : public USwAttackState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDefense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefenseActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefenseActiveAtStart;
    
    URsAbilityState();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ERsCombatDefenseSuccessType OnDefenseSuccess(ARsCharacter* TheDefender, const FRsDamageParams& DamageInfo, ARsCharacter* AttackingCharacter, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentAbilityTarget() const;
    
};

