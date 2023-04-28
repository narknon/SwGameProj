#pragma once
#include "CoreMinimal.h"
#include "RsSkeletalMeshData.generated.h"

USTRUCT(BlueprintType)
struct FRsSkeletalMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HashVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HashIndices;
    
    RSGAMETECHRT_API FRsSkeletalMeshData();
};

