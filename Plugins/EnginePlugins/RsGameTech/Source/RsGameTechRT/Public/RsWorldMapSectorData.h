#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapSectorData.generated.h"

class ARsWorldMapSectorActor;

USTRUCT(BlueprintType)
struct FRsWorldMapSectorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsExplored: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ElevationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapSectorActor* SectorActor;
    
    RSGAMETECHRT_API FRsWorldMapSectorData();
};

