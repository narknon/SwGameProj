#pragma once
#include "CoreMinimal.h"
#include "AudioRTPCNameRTPCValueSimplePair.generated.h"

USTRUCT(BlueprintType)
struct FAudioRTPCNameRTPCValueSimplePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RTPCValue;
    
    AKAUDIO_API FAudioRTPCNameRTPCValueSimplePair();
};

