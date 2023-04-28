#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapSectionLayerColorSettings.h"
#include "RsWorldMapModeLayerColorSettings.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapModeLayerColorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapSectionLayerColorSettings ObjectiveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapSectionLayerColorSettings ActiveLayerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapSectionLayerColorSettings ActiveLayerFogOfWarSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapSectionLayerColorSettings SelectedRegionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapSectionLayerColorSettings SelectedRegionFogOfWarSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapSectionLayerColorSettings InactiveLayerTopSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapSectionLayerColorSettings InactiveLayerTopFogOfWarSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapSectionLayerColorSettings InactiveLayerBottomSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapSectionLayerColorSettings InactiveLayerBottomFogOfWarSettings;
    
    RSGAMETECHRT_API FRsWorldMapModeLayerColorSettings();
};

