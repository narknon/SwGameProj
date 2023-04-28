#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsPhysicalAnimationRuntimeProfileParameters.h"
#include "RsAnimNotifyState_PhysicalAnimation.generated.h"

class URsPhysicalAnimationProfile;

UCLASS(Blueprintable)
class URsAnimNotifyState_PhysicalAnimation : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoNotActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationProfile* PhysicalAnimationProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationRuntimeProfileParameters PhysicalAnimationOperationParameters;
    
    URsAnimNotifyState_PhysicalAnimation();
};

