#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SwAnimNotifyState_WallCollisionDisabled.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SWGAME_API USwAnimNotifyState_WallCollisionDisabled : public UAnimNotifyState {
    GENERATED_BODY()
public:
    USwAnimNotifyState_WallCollisionDisabled();
};

