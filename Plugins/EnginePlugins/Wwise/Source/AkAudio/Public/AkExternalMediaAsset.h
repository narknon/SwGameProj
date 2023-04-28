#pragma once
#include "CoreMinimal.h"
#include "AkMediaAsset.h"
#include "AkExternalMediaAsset.generated.h"

UCLASS(Blueprintable)
class UAkExternalMediaAsset : public UAkMediaAsset {
    GENERATED_BODY()
public:
    UAkExternalMediaAsset();
};

