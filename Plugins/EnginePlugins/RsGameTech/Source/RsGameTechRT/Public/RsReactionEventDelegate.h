#pragma once
#include "CoreMinimal.h"
#include "RsReactionParameters.h"
#include "RsReactionEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsReactionEvent, const FRsReactionParameters&, ReactionParameters);

