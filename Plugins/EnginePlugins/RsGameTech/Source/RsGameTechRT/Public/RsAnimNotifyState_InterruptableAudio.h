#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsAnimNotifyState_Attachable -FallbackName=RsAnimNotifyState_Attachable
#include "RsAnimNotifyState_InterruptableAudio.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class URsAnimNotifyState_InterruptableAudio : public URsAnimNotifyState_Attachable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InterruptAudioEvent;
    
    URsAnimNotifyState_InterruptableAudio();
};

