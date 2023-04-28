#pragma once
#include "CoreMinimal.h"
#include "RsNarrativeConversationDesiredIdlesMap.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct DIALOGUEPLUGIN_API FRsNarrativeConversationDesiredIdlesMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UAnimationAsset>, TSoftObjectPtr<UAnimationAsset>> DesiredIdlesToTransitionAnims;
    
    FRsNarrativeConversationDesiredIdlesMap();
};

