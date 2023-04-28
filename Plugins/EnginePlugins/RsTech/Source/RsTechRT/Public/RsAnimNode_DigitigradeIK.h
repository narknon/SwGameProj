#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "RsAnimNode_DigitigradeIK.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsAnimNode_DigitigradeIK : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HelperBoneLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMaintainParallelogram: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMaintainEffectorRelRot: 1;
    
    FRsAnimNode_DigitigradeIK();
};

