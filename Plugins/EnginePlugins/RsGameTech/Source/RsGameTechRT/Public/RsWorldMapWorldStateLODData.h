#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeRef.h"
#include "ERsWorldMapWorldStateOptions.h"
#include "RsWorldMapWorldStateLODData.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapWorldStateLODData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateNodeRef WorldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapWorldStateOptions WorldStateVisibility;
    
    RSGAMETECHRT_API FRsWorldMapWorldStateLODData();
};

