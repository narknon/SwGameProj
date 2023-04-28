#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsConversationChoiceMadeEventDelegate.generated.h"

class ARsConversation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsConversationChoiceMadeEvent, ARsConversation*, Conversation, int32, ChoiceIndex, FGameplayTag, ChoiceTag);

