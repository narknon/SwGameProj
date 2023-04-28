#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_FOV.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_FOV : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVMultiplier;
    
public:
    UR4CameraBehavior_FOV();
};

