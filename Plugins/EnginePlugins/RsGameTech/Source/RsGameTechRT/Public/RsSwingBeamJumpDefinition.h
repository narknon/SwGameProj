#pragma once
#include "CoreMinimal.h"
#include "RsJumpData.h"
#include "RsJumpDefinition.h"
#include "RsSwingBeamJumpDefinition.generated.h"

UCLASS(Blueprintable)
class URsSwingBeamJumpDefinition : public URsJumpDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsJumpData SwingBeamJumpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwingBeamVerticalImpulseBoostBasedOnAngle;
    
    URsSwingBeamJumpDefinition();
};

