#pragma once
#include "CoreMinimal.h"
#include "RsReactionParameters.h"
#include "RsPostReactionEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsPostReactionEvent, const FRsReactionParameters&, ReactionParameters, bool, bInterrupted);

