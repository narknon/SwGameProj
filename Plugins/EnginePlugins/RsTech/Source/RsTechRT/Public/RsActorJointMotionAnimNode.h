#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "RsActorJointMotionAnimNode.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsActorJointMotionAnimNode : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference m_originJoint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference m_targetJoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_stripMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_stripRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_blendTime;
    
    FRsActorJointMotionAnimNode();
};

