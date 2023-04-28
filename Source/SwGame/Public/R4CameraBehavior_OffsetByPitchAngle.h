#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "ERsCameraOffsetType.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_OffsetByPitchAngle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_OffsetByPitchAngle : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsCameraOffsetType OffsetToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifyX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifyY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifyZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve XOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve YOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ZOffsetCurve;
    
public:
    UR4CameraBehavior_OffsetByPitchAngle();
};

