#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapBreadCrumbSettings.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapBreadCrumbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastCrumbsToUseToCullPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenBreadCrumbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplineMeshRingsPerSegment;
    
    RSGAMETECHRT_API FRsWorldMapBreadCrumbSettings();
};

