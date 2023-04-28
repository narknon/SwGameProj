#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "RsAbility.generated.h"

class URsAbilityState;
class URsHeroStateModifierDefinition;
class USwAttackState;

UCLASS(Abstract, Blueprintable, HideDropdown)
class SWGAME_API URsAbility : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualShutdownControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsAbilityState> DefaultAbilityState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* HeroStateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToAllowReactivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DarkModeTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AbilityType;
    
public:
    URsAbility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USwAttackState* GetCombatState() const;
    
};

