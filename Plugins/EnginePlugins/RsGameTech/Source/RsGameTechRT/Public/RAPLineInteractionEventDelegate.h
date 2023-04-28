#pragma once
#include "CoreMinimal.h"
#include "DialogueNode.h"
#include "RAPLineInteractionEventDelegate.generated.h"

class ARsConversation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRAPLineInteractionEvent, ARsConversation*, Conversation, const TArray<FDialogueNode>&, Choices);

