#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "BoneContainer.h"
#include "AlphaBlend.h"
#include "Animation/AnimNodeBase.h"
#include "RsAnimNode_TransitionBlendBase.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsAnimNode_TransitionBlendBase : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableFootPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption BodyBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeanHipTowardsSupportingFoot;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference HipBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipLeaningFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipOvershootFactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> FeetBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption FootBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockRotationOnLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwapFootMotionOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FootElevationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootElevation;
    
    FRsAnimNode_TransitionBlendBase();
};

