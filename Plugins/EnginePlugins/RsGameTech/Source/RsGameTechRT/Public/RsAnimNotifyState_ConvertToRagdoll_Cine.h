#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsPhysicalAnimationRuntimeProfileParameters.h"
#include "RsAnimNotifyState_ConvertToRagdoll_Cine.generated.h"

class URsPhysicalAnimationProfile;

UCLASS(Blueprintable)
class URsAnimNotifyState_ConvertToRagdoll_Cine : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationRuntimeProfileParameters PhysicalAnimationOperationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationProfile* PhysicalAnimationProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeferPhysicsStartUntilEndOfFrame;
    
    URsAnimNotifyState_ConvertToRagdoll_Cine();
};

