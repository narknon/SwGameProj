#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SwAnimNotifyState_SetRootMotionDropOffCheck.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SWGAME_API USwAnimNotifyState_SetRootMotionDropOffCheck : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DropOffCheckEnabled;
    
    USwAnimNotifyState_SetRootMotionDropOffCheck();
};

