#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsWorldMapSectionLayerColorSettings.h"
#include "RsWorldMapLevelColorSettings.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsWorldMapLevelColorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GeneralColors[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapSectionLayerColorSettings MapSectionColors[12];
    
    FRsWorldMapLevelColorSettings();
};

