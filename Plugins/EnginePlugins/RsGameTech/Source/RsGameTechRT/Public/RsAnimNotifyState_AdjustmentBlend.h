#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsAnimNotifyState_AdjustmentBlend.generated.h"

UCLASS(Blueprintable)
class URsAnimNotifyState_AdjustmentBlend : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AdjustmentBlendChannel;
    
    URsAnimNotifyState_AdjustmentBlend();
};

