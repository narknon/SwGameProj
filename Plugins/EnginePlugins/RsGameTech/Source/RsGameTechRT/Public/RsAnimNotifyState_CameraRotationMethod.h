#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EVTRotationUpdateMethod.h"
#include "RsAnimNotifyState_CameraRotationMethod.generated.h"

class URsCameraModeDefinition;

UCLASS(Blueprintable)
class URsAnimNotifyState_CameraRotationMethod : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVTRotationUpdateMethod> NotifyViewTargetRotationUpdateMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCameraModeDefinition* NotifyModeDefinition;
    
public:
    URsAnimNotifyState_CameraRotationMethod();
};

