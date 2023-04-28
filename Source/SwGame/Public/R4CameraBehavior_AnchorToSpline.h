#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_AnchorToSpline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_AnchorToSpline : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackingTime;
    
public:
    UR4CameraBehavior_AnchorToSpline();
};

