#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsAnimMotionBoneData.generated.h"

USTRUCT(BlueprintType)
struct RSANIMTECHRT_API FRsAnimMotionBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    FRsAnimMotionBoneData();
};

