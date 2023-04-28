#pragma once
#include "CoreMinimal.h"
#include "ERsPlayAnimationFinishMode.h"
#include "RsBTTask_PlayAnimationBase.h"
#include "RsBTTask_PlayPOIAnimation.generated.h"

UCLASS(Blueprintable)
class URsBTTask_PlayPOIAnimation : public URsBTTask_PlayAnimationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsPlayAnimationFinishMode AnimationFinishMode;
    
public:
    URsBTTask_PlayPOIAnimation();
};

