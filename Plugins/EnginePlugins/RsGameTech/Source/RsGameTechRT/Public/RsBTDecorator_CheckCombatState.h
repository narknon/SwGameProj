#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "ERsCombatState.h"
#include "RsBTDecorator_CheckCombatState.generated.h"

class ARsCharacter;

UCLASS(Blueprintable)
class URsBTDecorator_CheckCombatState : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCombatState::Type> CombatState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 CombatStateMask;
    
public:
    URsBTDecorator_CheckCombatState();
private:
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(ARsCharacter* Character, TEnumAsByte<ERsCombatState::Type> PreviousCombatState, TEnumAsByte<ERsCombatState::Type> NewCombatState);
    
};

