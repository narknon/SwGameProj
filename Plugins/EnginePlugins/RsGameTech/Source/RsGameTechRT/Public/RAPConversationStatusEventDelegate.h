#pragma once
#include "CoreMinimal.h"
#include "RAPConversationStatusEventDelegate.generated.h"

class AActor;
class ARsConversation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRAPConversationStatusEvent, ARsConversation*, Conversation, const TArray<AActor*>&, ConversationActors, int32, ConversationId);

