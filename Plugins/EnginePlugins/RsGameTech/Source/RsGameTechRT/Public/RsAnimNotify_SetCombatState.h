#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsConditionalAnimNotify -FallbackName=RsConditionalAnimNotify
#include "ERsCombatState.h"
#include "RsAnimNotify_SetCombatState.generated.h"

UCLASS(Blueprintable)
class URsAnimNotify_SetCombatState : public URsConditionalAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCombatState::Type> CombatState;
    
public:
    URsAnimNotify_SetCombatState();
};

