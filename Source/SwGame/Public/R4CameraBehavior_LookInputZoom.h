#pragma once
#include "CoreMinimal.h"
#include "RsContinuousInterpParams.h"
#include "R4CameraBehavior_LookInput.h"
#include "R4CameraBehavior_LookInputZoom.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_LookInputZoom : public UR4CameraBehavior_LookInput {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomControllerLookInputScaleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomControllerLookInputScalePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomAcceleratedControllerInputScaleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomAcceleratedControllerInputScalePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMouseLookInputScaleYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomMouseLookInputScalePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsContinuousInterpParams ZoomInputSmoothing;
    
public:
    UR4CameraBehavior_LookInputZoom();
};

