#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsConversationPossiblesIdlesList.h"
#include "RsConversationSpeakersToPossibleCurrentIdles.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsConversationSpeakersToPossibleCurrentIdles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRsConversationPossiblesIdlesList> SpeakersToPossibleCurrentIdles;
    
    FRsConversationSpeakersToPossibleCurrentIdles();
};

