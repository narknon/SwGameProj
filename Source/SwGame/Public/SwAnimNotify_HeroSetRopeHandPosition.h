#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESwRopeAttachmentHandPosition.h"
#include "SwAnimNotify_HeroSetRopeHandPosition.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SWGAME_API USwAnimNotify_HeroSetRopeHandPosition : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwRopeAttachmentHandPosition HandPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateHandAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftHandAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightHandAttached;
    
public:
    USwAnimNotify_HeroSetRopeHandPosition();
};

