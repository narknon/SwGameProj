#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_WorldMapLevelType.generated.h"

USTRUCT(BlueprintType)
struct FRsBitfield_WorldMapLevelType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    RSGAMETECHRT_API FRsBitfield_WorldMapLevelType();
};

