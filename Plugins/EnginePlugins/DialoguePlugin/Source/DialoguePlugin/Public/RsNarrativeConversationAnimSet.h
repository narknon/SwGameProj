#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsNarrativeConversationAnimSet.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct DIALOGUEPLUGIN_API FRsNarrativeConversationAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UAnimationAsset>> CharacterTagToAnimAsset;
    
    FRsNarrativeConversationAnimSet();
};

