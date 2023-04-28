#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_AnchorToFocusLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_AnchorToFocusLocation : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusPercentage;
    
public:
    UR4CameraBehavior_AnchorToFocusLocation();
};

