#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "RsAudioEmitterVolumetric.generated.h"

class UAkComponent;
class URsAudioPolyComponent;

UCLASS(Blueprintable)
class ARsAudioEmitterVolumetric : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsAudioPolyComponent* RsAudioPolyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnExitAttenuationFadeOutTime;
    
    ARsAudioEmitterVolumetric();
};

