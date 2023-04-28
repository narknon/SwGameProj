#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "RsLayeredBlend.generated.h"

class URsBoneMask;
class URsLayeredBlendDefinition;

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsLayeredBlend : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsLayeredBlendDefinition* Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FPoseLink> BlendPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<bool> PoseActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> PoseBlendTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<URsBoneMask*> BoneMaskOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    float BoneMaskOverrideBlendTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreInitialBlendingOnBecomeRelevant;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReorderPoseUpdateByRootWeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRelevantPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBaseHasWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsBoneMask*> CachedBoneMaskForLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsBoneMask*> BoneMaskBlendSourceForLayers;
    
public:
    FRsLayeredBlend();
};

