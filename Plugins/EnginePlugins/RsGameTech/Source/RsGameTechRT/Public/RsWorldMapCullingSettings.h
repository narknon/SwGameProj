#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapCullingSettings.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsWorldMapCullingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectorCameraCullDistance;
    
    FRsWorldMapCullingSettings();
};

