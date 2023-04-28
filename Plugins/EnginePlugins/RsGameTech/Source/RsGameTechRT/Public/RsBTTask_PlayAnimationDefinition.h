#pragma once
#include "CoreMinimal.h"
#include "RsBTTask_PlayAnimationBase.h"
#include "RsBTTask_PlayAnimationDefinition.generated.h"

class URsAIAnimationDefinition;

UCLASS(Blueprintable)
class URsBTTask_PlayAnimationDefinition : public URsBTTask_PlayAnimationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsAIAnimationDefinition* AnimationDefinition;
    
public:
    URsBTTask_PlayAnimationDefinition();
};

