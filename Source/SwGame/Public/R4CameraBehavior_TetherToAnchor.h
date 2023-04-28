#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_TetherToAnchor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_TetherToAnchor : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TetherDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainRelativeZ;
    
public:
    UR4CameraBehavior_TetherToAnchor();
};

