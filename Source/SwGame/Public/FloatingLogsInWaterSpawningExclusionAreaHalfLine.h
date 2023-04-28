#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FloatingLogsInWaterSpawningExclusionAreaHalfLine.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FFloatingLogsInWaterSpawningExclusionAreaHalfLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Thickness;
    
    FFloatingLogsInWaterSpawningExclusionAreaHalfLine();
};

