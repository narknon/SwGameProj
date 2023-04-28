#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "ERsFootType.h"
#include "RsFootBoneData.generated.h"

USTRUCT(BlueprintType)
struct FRsFootBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsFootType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootBaseBone;
    
    RSGAMETECHRT_API FRsFootBoneData();
};

