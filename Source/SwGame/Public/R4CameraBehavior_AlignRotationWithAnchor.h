#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_AlignRotationWithAnchor.generated.h"

UCLASS(Blueprintable)
class UR4CameraBehavior_AlignRotationWithAnchor : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawFollowTolerance;
    
public:
    UR4CameraBehavior_AlignRotationWithAnchor();
};

