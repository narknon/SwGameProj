#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwPullAttachmentCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSwPullAttachmentCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData PullAttachmentEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData PullAttachmentSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData PullAttachmentFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRotate;
    
    SWGAME_API FSwPullAttachmentCharacterData();
};

