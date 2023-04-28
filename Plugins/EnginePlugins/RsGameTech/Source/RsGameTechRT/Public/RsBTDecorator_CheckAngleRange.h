#pragma once
#include "CoreMinimal.h"
#include "RsBTDecorator_RelativeToLocationBase.h"
#include "RsBTDecorator_CheckAngleRange.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_CheckAngleRange : public URsBTDecorator_RelativeToLocationBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfAngle;
    
public:
    URsBTDecorator_CheckAngleRange();
};

