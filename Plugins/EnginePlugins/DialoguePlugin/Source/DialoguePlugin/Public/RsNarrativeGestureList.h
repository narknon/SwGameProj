#pragma once
#include "CoreMinimal.h"
#include "DialogueGestureParams.h"
#include "RsNarrativeConversationIdleRequest.h"
#include "RsNarrativeConversationLookatRequest.h"
#include "RsNarrativeGestureList.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUEPLUGIN_API FRsNarrativeGestureList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogueGestureParams> Gestures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsNarrativeConversationIdleRequest> IdleRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsNarrativeConversationLookatRequest> LookatRequests;
    
    FRsNarrativeGestureList();
};

