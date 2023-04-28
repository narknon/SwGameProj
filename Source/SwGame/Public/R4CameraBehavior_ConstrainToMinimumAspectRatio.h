#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_ConstrainToMinimumAspectRatio.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_ConstrainToMinimumAspectRatio : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAspectRatio;
    
public:
    UR4CameraBehavior_ConstrainToMinimumAspectRatio();
};

