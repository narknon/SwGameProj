#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapModeLayerColorSettings.h"
#include "RsWorldMapLocalModeSettings.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapLocalModeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapModeLayerColorSettings LayerColorSettings;
    
    RSGAMETECHRT_API FRsWorldMapLocalModeSettings();
};

