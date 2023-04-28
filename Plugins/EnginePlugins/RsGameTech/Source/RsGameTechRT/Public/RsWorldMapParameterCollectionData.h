#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapParameterCollectionNames.h"
#include "RsWorldMapParameterCollectionData.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsWorldMapParameterCollectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapParameterCollectionNames Names;
    
    FRsWorldMapParameterCollectionData();
};

