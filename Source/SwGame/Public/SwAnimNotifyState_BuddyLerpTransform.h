#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ESwAIBuddyDroidTransformLerpMode.h"
#include "SwAnimNotifyState_BuddyLerpTransform.generated.h"

UCLASS(Blueprintable)
class USwAnimNotifyState_BuddyLerpTransform : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwAIBuddyDroidTransformLerpMode TransformLerpMode;
    
public:
    USwAnimNotifyState_BuddyLerpTransform();
};

