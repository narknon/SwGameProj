#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsConditionalTargetAnimNotifyState -FallbackName=RsConditionalTargetAnimNotifyState
#include "RsAnimNotifyState_HeroStateModifier.generated.h"

class URsHeroStateModifierDefinition;

UCLASS(Blueprintable)
class URsAnimNotifyState_HeroStateModifier : public URsConditionalTargetAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* ModifierDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckValidBeforePushing;
    
    URsAnimNotifyState_HeroStateModifier();
};

