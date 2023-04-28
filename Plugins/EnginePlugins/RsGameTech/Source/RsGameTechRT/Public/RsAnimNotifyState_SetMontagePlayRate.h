#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsAnimNotifyState_SetMontagePlayRate.generated.h"

UCLASS(Blueprintable)
class URsAnimNotifyState_SetMontagePlayRate : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Playrate;
    
    URsAnimNotifyState_SetMontagePlayRate();
};

