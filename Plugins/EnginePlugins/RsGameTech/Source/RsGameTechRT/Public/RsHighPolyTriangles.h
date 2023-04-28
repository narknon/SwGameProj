#pragma once
#include "CoreMinimal.h"
#include "RsHighPolyTriangles.generated.h"

USTRUCT(BlueprintType)
struct FRsHighPolyTriangles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TriangleIndices;
    
    RSGAMETECHRT_API FRsHighPolyTriangles();
};

