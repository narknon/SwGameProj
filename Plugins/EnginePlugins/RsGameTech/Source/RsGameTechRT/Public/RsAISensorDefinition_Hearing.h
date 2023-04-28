#pragma once
#include "CoreMinimal.h"
#include "RsAIHearingAwarenessEventData.h"
#include "RsAISensorDefinition.h"
#include "RsAISensorDefinition_Hearing.generated.h"

UCLASS(Blueprintable)
class URsAISensorDefinition_Hearing : public URsAISensorDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIHearingAwarenessEventData SoundAwarenessValues[6];
    
public:
    URsAISensorDefinition_Hearing();
};

