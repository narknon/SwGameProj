#pragma once
#include "CoreMinimal.h"
#include "ESwWorldMapLayerBlendMode.h"
#include "SwWorldMapLayerRenderData.generated.h"

USTRUCT(BlueprintType)
struct FSwWorldMapLayerRenderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwWorldMapLayerBlendMode BlendMode;
    
    SWGAME_API FSwWorldMapLayerRenderData();
};

