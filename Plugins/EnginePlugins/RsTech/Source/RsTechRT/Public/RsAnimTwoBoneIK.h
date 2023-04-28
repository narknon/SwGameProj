#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "RsSurveyLocation.h"
#include "RsAnimTwoBoneIK.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsAnimTwoBoneIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TakeRotationFromEffectorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaintainEffectorRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowStretching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D StretchLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TweenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlantedThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference InfoBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference RootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKRootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKJointBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKEffectorBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IKOffsetToTopology;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSurveyLocation EffectorSurvey;
    
    FRsAnimTwoBoneIK();
};

