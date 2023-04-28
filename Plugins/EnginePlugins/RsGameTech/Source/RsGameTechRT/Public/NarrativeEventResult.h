#pragma once
#include "CoreMinimal.h"
#include "ENarrativeEventResultType.h"
#include "NarrativeEventResult.generated.h"

class AActor;
class ARsConversation;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FNarrativeEventResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENarrativeEventResultType Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsConversation* PlayingConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ConversationActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueuedItemID;
    
    FNarrativeEventResult();
};

