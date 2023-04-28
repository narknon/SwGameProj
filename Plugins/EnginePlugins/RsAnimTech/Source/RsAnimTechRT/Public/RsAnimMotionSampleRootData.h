#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsAnimMotionSampleRootData.generated.h"

USTRUCT(BlueprintType)
struct FRsAnimMotionSampleRootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RootLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RootDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RootVelocity;
    
    RSANIMTECHRT_API FRsAnimMotionSampleRootData();
};

