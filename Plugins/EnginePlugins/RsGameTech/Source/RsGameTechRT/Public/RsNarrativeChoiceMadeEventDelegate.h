#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsNarrativeChoiceMadeEventDelegate.generated.h"

class ARsConversation;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRsNarrativeChoiceMadeEvent, ARsConversation*, Conversation, int32, ChoiceIndex, FGameplayTag, FirstChoiceTag);

