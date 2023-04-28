#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_OrientRelativeToFocusNormal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_OrientRelativeToFocusNormal : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeTargetAngleBehindPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeTargetAngleInFrontOfPlayer;
    
public:
    UR4CameraBehavior_OrientRelativeToFocusNormal();
};

