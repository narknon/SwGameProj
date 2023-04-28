#pragma once
#include "CoreMinimal.h"
#include "RsAnimMotionSampleRootData.h"
#include "RsAnimMotionRootData.generated.h"

USTRUCT(BlueprintType)
struct FRsAnimMotionRootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAnimMotionSampleRootData> FrameSamples;
    
    RSANIMTECHRT_API FRsAnimMotionRootData();
};

