#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsAnimNotifyState_MotionMatchTag.generated.h"

UCLASS(Blueprintable)
class URsAnimNotifyState_MotionMatchTag : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tags;
    
    URsAnimNotifyState_MotionMatchTag();
};

