#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "RsVolumeBlueprintBase.generated.h"

UCLASS(Blueprintable)
class ARsVolumeBlueprintBase : public AVolume {
    GENERATED_BODY()
public:
    ARsVolumeBlueprintBase();
    UFUNCTION(BlueprintCallable)
    void SetVolumeColor(FColor newVolumeColor);
    
};

