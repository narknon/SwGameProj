#pragma once
#include "CoreMinimal.h"
#include "RsMotionMatchBoneData.generated.h"

USTRUCT(BlueprintType)
struct FRsMotionMatchBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    RSANIMTECHRT_API FRsMotionMatchBoneData();
};

