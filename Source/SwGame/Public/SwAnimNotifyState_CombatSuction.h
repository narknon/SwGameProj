#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsConditionalTargetAnimNotifyState -FallbackName=RsConditionalTargetAnimNotifyState
#include "SwAnimNotifyState_CombatSuction.generated.h"

UCLASS(Blueprintable)
class USwAnimNotifyState_CombatSuction : public URsConditionalTargetAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideMultiplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideMultiplier;
    
public:
    USwAnimNotifyState_CombatSuction();
};

