#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SwAnimNotifyState_HeroCombatSlowDown.generated.h"

UCLASS(Blueprintable)
class USwAnimNotifyState_HeroCombatSlowDown : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation;
    
public:
    USwAnimNotifyState_HeroCombatSlowDown();
};

