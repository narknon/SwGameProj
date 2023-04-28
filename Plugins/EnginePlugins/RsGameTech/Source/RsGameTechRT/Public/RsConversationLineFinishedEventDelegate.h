#pragma once
#include "CoreMinimal.h"
#include "NarrativeCommonLineData.h"
#include "RsConversationLineFinishedEventDelegate.generated.h"

class ARsConversation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsConversationLineFinishedEvent, ARsConversation*, Conversation, FNarrativeCommonLineData, LineData, int32, LineOrderNumber);

