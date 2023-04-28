#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsAnimNotifyState_ConvertToRagdollWithinTimePeriod.generated.h"

UCLASS(Blueprintable)
class URsAnimNotifyState_ConvertToRagdollWithinTimePeriod : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoNotActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeferPhysicsStartUntilEndOfFrame;
    
    URsAnimNotifyState_ConvertToRagdollWithinTimePeriod();
};

