#pragma once
#include "CoreMinimal.h"
#include "RsPoseMatchWeightOptions.h"
#include "RsPoseMatchWeightAndBoneOptions.generated.h"

USTRUCT(BlueprintType)
struct FRsPoseMatchWeightAndBoneOptions : public FRsPoseMatchWeightOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OverrideBones;
    
    RSANIMTECHRT_API FRsPoseMatchWeightAndBoneOptions();
};

