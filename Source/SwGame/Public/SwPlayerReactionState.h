#pragma once
#include "CoreMinimal.h"
#include "SwReactionState.h"
#include "SwPlayerReactionState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SWGAME_API USwPlayerReactionState : public USwReactionState {
    GENERATED_BODY()
public:
    USwPlayerReactionState();
};

