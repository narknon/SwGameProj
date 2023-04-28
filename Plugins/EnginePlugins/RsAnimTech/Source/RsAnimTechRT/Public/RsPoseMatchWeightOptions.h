#pragma once
#include "CoreMinimal.h"
#include "RsPoseMatchWeightOptions.generated.h"

USTRUCT(BlueprintType)
struct FRsPoseMatchWeightOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneLocationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneVelocityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootVelocityWeight;
    
    RSANIMTECHRT_API FRsPoseMatchWeightOptions();
};

