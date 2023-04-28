#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsConversationPossiblesIdlesList.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsConversationPossiblesIdlesList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PossibleCurrentIdles;
    
    FRsConversationPossiblesIdlesList();
};

