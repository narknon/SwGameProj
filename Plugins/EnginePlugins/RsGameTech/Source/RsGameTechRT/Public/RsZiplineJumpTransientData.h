#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsZiplineMovementDirection.h"
#include "ERsZiplineMovementMode.h"
#include "RsZiplineJumpTransientData.generated.h"

USTRUCT(BlueprintType)
struct FRsZiplineJumpTransientData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsZiplineMovementDirection ZiplineMovementDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsZiplineMovementMode ZiplineMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ZiplineDirectionWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineVerticalAngleDegrees;
    
    RSGAMETECHRT_API FRsZiplineJumpTransientData();
};

