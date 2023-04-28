#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsMapSectionTag -FallbackName=RsMapSectionTag
#include "RsMapSectionFlags.h"
#include "RsSphereBounds.h"
#include "RsMapSectionData.generated.h"

USTRUCT(BlueprintType)
struct FRsMapSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag MapSectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSphereBounds SphereBounds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 MapSectionTagHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectorIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InteriorIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InteriorElevationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ElevationLevel;
    
    RSGAMETECHRT_API FRsMapSectionData();
};

