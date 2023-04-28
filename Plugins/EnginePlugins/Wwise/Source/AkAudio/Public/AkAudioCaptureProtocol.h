#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCaptureProtocolBase.h"
#include "AkAudioCaptureProtocol.generated.h"

UCLASS(Blueprintable)
class UAkAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UAkAudioCaptureProtocol();
};

