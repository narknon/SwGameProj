#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "RsAIPOIBehaviorData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FRsAIPOIBehaviorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomStartTimeForLoopSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MontageExitSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData ExitAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideDeathAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* OverrideDeathAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionParmName;
    
    RSGAMETECHRT_API FRsAIPOIBehaviorData();
};

