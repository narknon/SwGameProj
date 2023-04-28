#pragma once
#include "CoreMinimal.h"
#include "FloatingLogsInWaterSpawningExclusionAreaHalfLine.h"
#include "FloatingLogsInWaterSpawningExclusionDefinition.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FFloatingLogsInWaterSpawningExclusionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloatingLogsInWaterSpawningExclusionAreaHalfLine> HalfLineAreas;
    
    FFloatingLogsInWaterSpawningExclusionDefinition();
};

