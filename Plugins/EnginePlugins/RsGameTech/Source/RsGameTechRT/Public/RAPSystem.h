#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RAPConversationStatusEventDelegate.h"
#include "RAPLineEndedEventDelegate.h"
#include "RAPLineInteractionEventDelegate.h"
#include "RAPLineStartedEventDelegate.h"
#include "RAPSubtitleStartedEventDelegate.h"
#include "RAPSystem.generated.h"

class URAPDatabase;

UCLASS(Blueprintable)
class URAPSystem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRAPSubtitleStartedEvent ShowCinematicSubtitleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRAPLineEndedEvent HideCinematicSubtitleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRAPLineStartedEvent RAPLineStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRAPLineEndedEvent RAPLineEndedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRAPLineInteractionEvent RAPLineInteractionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRAPConversationStatusEvent RAPConversationStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRAPConversationStatusEvent RAPConversationFinishedEvent;
    
    URAPSystem();
    UFUNCTION(BlueprintCallable)
    URAPDatabase* GetRAPDatabase();
    
};

