#pragma once
#include "CoreMinimal.h"
#include "AkAudioInputComponent.h"
#include "AkMediaPlayerAudioInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkMediaPlayerAudioInputComponent : public UAkAudioInputComponent {
    GENERATED_BODY()
public:
    UAkMediaPlayerAudioInputComponent();
};

