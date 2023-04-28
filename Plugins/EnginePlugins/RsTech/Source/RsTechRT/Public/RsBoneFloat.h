#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "RsBoneFloat.generated.h"

USTRUCT(BlueprintType)
struct FRsBoneFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideChildren;
    
    RSTECHRT_API FRsBoneFloat();
};

