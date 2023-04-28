#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "ERsAnimatedCameraMode.h"
#include "R4CameraBehavior_Animated.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_Animated : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearRollWhenFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAnimatedCameraMode AnimatedCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreMontageBlendOut;
    
public:
    UR4CameraBehavior_Animated();
};

