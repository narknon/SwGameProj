#pragma once
#include "CoreMinimal.h"
#include "RsConversationFinishedEventDelegate.generated.h"

class ARsConversation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsConversationFinishedEvent, ARsConversation*, Conversation);

