#pragma once
#include "CoreMinimal.h"
#include "RsBTTask_PlayAnimationBase.h"
#include "RsCharacterAnimationData.h"
#include "RsBTTask_PlayAnimation.generated.h"

UCLASS(Blueprintable)
class URsBTTask_PlayAnimation : public URsBTTask_PlayAnimationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData AnimData;
    
public:
    URsBTTask_PlayAnimation();
};

