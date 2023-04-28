#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsConstrainedJumpDirection.h"
#include "RsConstrainedJumpPadMapping.generated.h"

USTRUCT(BlueprintType)
struct FRsConstrainedJumpPadMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpectedPadAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ValidAngleDifferenceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsConstrainedJumpDirection JumpDirection;
    
    RSGAMETECHRT_API FRsConstrainedJumpPadMapping();
};

