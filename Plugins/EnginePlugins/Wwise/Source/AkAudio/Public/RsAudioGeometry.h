#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "RsAudioGeometry.generated.h"

class UAkSurfaceReflectorSetComponent;

UCLASS(Blueprintable)
class ARsAudioGeometry : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    
    ARsAudioGeometry();
};

