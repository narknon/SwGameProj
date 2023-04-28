#pragma once
#include "CoreMinimal.h"
#include "RsMotionMatchSequenceEntry.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRsMotionMatchSequenceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUniformRootMotion;
    
    RSANIMTECHRT_API FRsMotionMatchSequenceEntry();
};

