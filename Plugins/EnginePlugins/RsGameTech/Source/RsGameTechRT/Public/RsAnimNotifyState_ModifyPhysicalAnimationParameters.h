#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsPhysicalAnimationNotifyParameters.h"
#include "RsAnimNotifyState_ModifyPhysicalAnimationParameters.generated.h"

UCLASS(Blueprintable)
class URsAnimNotifyState_ModifyPhysicalAnimationParameters : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoNotActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationNotifyParameters ModifyParameters;
    
    URsAnimNotifyState_ModifyPhysicalAnimationParameters();
};

