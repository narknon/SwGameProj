#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapLODLevelData.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapLODLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomLevel;
    
    RSGAMETECHRT_API FRsWorldMapLODLevelData();
};

