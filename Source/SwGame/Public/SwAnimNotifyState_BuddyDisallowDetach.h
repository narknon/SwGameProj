#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SwAnimNotifyState_BuddyDisallowDetach.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SWGAME_API USwAnimNotifyState_BuddyDisallowDetach : public UAnimNotifyState {
    GENERATED_BODY()
public:
    USwAnimNotifyState_BuddyDisallowDetach();
};

