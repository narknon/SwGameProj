#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_AnchorToEyeLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_AnchorToEyeLocation : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachToleranceHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachToleranceVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoOffsetTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetTraceOriginHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepAnchorAboveNavSurface;
    
public:
    UR4CameraBehavior_AnchorToEyeLocation();
};

