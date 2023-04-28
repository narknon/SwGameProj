#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "ESwPullAmbientRotationType.h"
#include "SwPullTractorCommonData.h"
#include "SwPullTractorCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSwPullTractorCharacterData : public FSwPullTractorCommonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData PullEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData PullCatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData PullDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnimationDriven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationDrivenRotationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldApplyPhysicalAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwPullAmbientRotationType AmbientRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUnclampToNavMeshAfterEnter;
    
    SWGAME_API FSwPullTractorCharacterData();
};

