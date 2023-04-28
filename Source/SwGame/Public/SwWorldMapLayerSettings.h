#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwWorldMapLayerSettings.generated.h"

USTRUCT(BlueprintType)
struct FSwWorldMapLayerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LandmarkColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PathColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutlineFrontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutlineBackColor;
    
    SWGAME_API FSwWorldMapLayerSettings();
};

