#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapColorPaletteType.h"
#include "RsWorldMapSectionColorMapping.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapSectionColorMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapColorPaletteType LandmarkColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapColorPaletteType PathColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapColorPaletteType OutlineFrontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapColorPaletteType OutlineBackColor;
    
    RSGAMETECHRT_API FRsWorldMapSectionColorMapping();
};

