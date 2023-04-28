#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsWorldMapBreadCrumb.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapBreadCrumb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    RSGAMETECHRT_API FRsWorldMapBreadCrumb();
};

