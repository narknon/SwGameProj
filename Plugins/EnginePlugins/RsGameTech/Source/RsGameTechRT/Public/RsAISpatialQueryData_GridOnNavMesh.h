#pragma once
#include "CoreMinimal.h"
#include "RsAISpatialQueryData_GridOnNavMesh.generated.h"

USTRUCT(BlueprintType)
struct FRsAISpatialQueryData_GridOnNavMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceBetweenSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPathDistance;
    
    RSGAMETECHRT_API FRsAISpatialQueryData_GridOnNavMesh();
};

