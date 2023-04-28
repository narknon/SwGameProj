#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsConditionalAnimNotifyState -FallbackName=RsConditionalAnimNotifyState
#include "ERsCombatState.h"
#include "RsAnimNotifyState_SetCombatStateDuration.generated.h"

UCLASS(Blueprintable)
class URsAnimNotifyState_SetCombatStateDuration : public URsConditionalAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCombatState::Type> CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCombatState::Type> EndingCombatState;
    
    URsAnimNotifyState_SetCombatStateDuration();
};

