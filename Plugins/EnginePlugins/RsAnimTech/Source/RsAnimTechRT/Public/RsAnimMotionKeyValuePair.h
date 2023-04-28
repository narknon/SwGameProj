#pragma once
#include "CoreMinimal.h"
#include "RsAnimMotionBoneData.h"
#include "RsAnimMotionKeyValuePair.generated.h"

USTRUCT(BlueprintType)
struct FRsAnimMotionKeyValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAnimMotionBoneData> MotionData;
    
    RSANIMTECHRT_API FRsAnimMotionKeyValuePair();
};

