#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_AccessibilityFOV.generated.h"

UCLASS(Blueprintable)
class UR4CameraBehavior_AccessibilityFOV : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFOV;
    
public:
    UR4CameraBehavior_AccessibilityFOV();
};

