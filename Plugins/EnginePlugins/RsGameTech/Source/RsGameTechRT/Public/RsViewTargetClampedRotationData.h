#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsViewTargetClampedRotationData.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsViewTargetClampedRotationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReferenceDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    FRsViewTargetClampedRotationData();
};

