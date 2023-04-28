#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "RsAnimNode_QuadrupedBodyIK.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAnimNode_QuadrupedBodyIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BodyBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> AdditionalBodyBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceStartZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceEndZ;
    
    FRsAnimNode_QuadrupedBodyIK();
};

