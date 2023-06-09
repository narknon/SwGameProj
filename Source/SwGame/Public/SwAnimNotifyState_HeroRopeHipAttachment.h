#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SwAnimNotifyState_HeroRopeHipAttachment.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SWGAME_API USwAnimNotifyState_HeroRopeHipAttachment : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentBone;
    
public:
    USwAnimNotifyState_HeroRopeHipAttachment();
};

