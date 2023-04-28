#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsNarrativeConversationLookatRequest.generated.h"

USTRUCT(BlueprintType)
struct FRsNarrativeConversationLookatRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LookatTargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LookatTargetObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelay;
    
    DIALOGUEPLUGIN_API FRsNarrativeConversationLookatRequest();
};

