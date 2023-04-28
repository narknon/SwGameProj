#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_WorldMapLODLevel.h"
#include "RsBitfield_WorldMapLevelType.h"
#include "RsWorldMapLODOptions.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapLODOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_WorldMapLevelType RequiredWorldMapLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_WorldMapLODLevel RequiredLocalMapLODLevel;
    
    RSGAMETECHRT_API FRsWorldMapLODOptions();
};

