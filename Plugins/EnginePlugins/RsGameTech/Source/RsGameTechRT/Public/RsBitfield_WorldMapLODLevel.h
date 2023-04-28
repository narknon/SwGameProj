#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_WorldMapLODLevel.generated.h"

USTRUCT(BlueprintType)
struct FRsBitfield_WorldMapLODLevel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    RSGAMETECHRT_API FRsBitfield_WorldMapLODLevel();
};

