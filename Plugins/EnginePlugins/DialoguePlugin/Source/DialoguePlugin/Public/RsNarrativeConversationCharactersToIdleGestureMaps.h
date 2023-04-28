#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsNarrativeConversationIdlesToGestureAssets.h"
#include "RsNarrativeConversationCharactersToIdleGestureMaps.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUEPLUGIN_API FRsNarrativeConversationCharactersToIdleGestureMaps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRsNarrativeConversationIdlesToGestureAssets> CharacterTagToIdleGestureMap;
    
    FRsNarrativeConversationCharactersToIdleGestureMaps();
};

