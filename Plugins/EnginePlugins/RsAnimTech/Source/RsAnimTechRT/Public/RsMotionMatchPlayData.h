#pragma once
#include "CoreMinimal.h"
#include "RsMotionMatchPlayData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRsMotionMatchPlayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Sequence;
    
    RSANIMTECHRT_API FRsMotionMatchPlayData();
};

