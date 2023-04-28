#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "RsPoseMatchWeightAndBoneOptions.h"
#include "RsAnimNode_BlendSpacePlayer.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsAnimNode_BlendSpacePlayer : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFindStartTimeByPoseMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPoseMatchWeightAndBoneOptions PoseMatchOptions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockBlendInputX;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockBlendInputY;
    
    FRsAnimNode_BlendSpacePlayer();
};

