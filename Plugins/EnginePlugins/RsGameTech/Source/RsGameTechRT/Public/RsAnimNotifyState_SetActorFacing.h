#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ERsActorFacingMode.h"
#include "RsAnimNotifyState_SetActorFacing.generated.h"

UCLASS(Blueprintable)
class URsAnimNotifyState_SetActorFacing : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsActorFacingMode FacingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionParm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FacingCurveName;
    
    URsAnimNotifyState_SetActorFacing();
};

