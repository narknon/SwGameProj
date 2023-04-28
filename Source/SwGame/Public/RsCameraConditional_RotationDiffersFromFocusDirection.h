#pragma once
#include "CoreMinimal.h"
#include "RsCameraConditional.h"
#include "RsCameraConditional_RotationDiffersFromFocusDirection.generated.h"

UCLASS(Blueprintable)
class URsCameraConditional_RotationDiffersFromFocusDirection : public URsCameraConditional {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowableYawDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowablePitchDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowableYawDifferenceEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowablePitchDifferenceEnabled: 1;
    
public:
    URsCameraConditional_RotationDiffersFromFocusDirection();
};

