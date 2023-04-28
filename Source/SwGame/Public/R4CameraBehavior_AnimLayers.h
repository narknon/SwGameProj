#pragma once
#include "CoreMinimal.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_AnimLayers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR4CameraBehavior_AnimLayers : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationIntensity;
    
public:
    UR4CameraBehavior_AnimLayers();
};

