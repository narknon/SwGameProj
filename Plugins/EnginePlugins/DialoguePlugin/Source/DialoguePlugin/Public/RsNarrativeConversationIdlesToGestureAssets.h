#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsNarrativeConversationGestureTriggeringDefaults.h"
#include "RsNarrativeConversationIdlesToGestureAssets.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUEPLUGIN_API FRsNarrativeConversationIdlesToGestureAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRsNarrativeConversationGestureTriggeringDefaults> IdleTagsToGestureTriggeringDefaults;
    
    FRsNarrativeConversationIdlesToGestureAssets();
};

