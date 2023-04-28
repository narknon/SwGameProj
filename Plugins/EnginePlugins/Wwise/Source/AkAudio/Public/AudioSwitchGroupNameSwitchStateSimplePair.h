#pragma once
#include "CoreMinimal.h"
#include "AudioSwitchGroupNameSwitchStateSimplePair.generated.h"

USTRUCT(BlueprintType)
struct FAudioSwitchGroupNameSwitchStateSimplePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitchGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitchState;
    
    AKAUDIO_API FAudioSwitchGroupNameSwitchStateSimplePair();
};

