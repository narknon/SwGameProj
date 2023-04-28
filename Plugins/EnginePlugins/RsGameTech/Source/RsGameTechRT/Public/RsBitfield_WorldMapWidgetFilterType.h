#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_WorldMapWidgetFilterType.generated.h"

USTRUCT(BlueprintType)
struct FRsBitfield_WorldMapWidgetFilterType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    RSGAMETECHRT_API FRsBitfield_WorldMapWidgetFilterType();
};

