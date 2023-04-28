#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RsSkipReactionProperties.h"
#include "SwAnimNotify_SetSkipReaction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SWGAME_API USwAnimNotify_SetSkipReaction : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSkipReactionProperties SkipReactionConfig;
    
    USwAnimNotify_SetSkipReaction();
};

