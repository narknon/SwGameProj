#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_AlignRotationWithFocus.generated.h"

UCLASS(Blueprintable)
class UR4CameraBehavior_AlignRotationWithFocus : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawFollowTolerance;
    
public:
    UR4CameraBehavior_AlignRotationWithFocus();
};

