#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RandomEventEncounterGroupStreamingAreaData.generated.h"

USTRUCT(BlueprintType)
struct FRandomEventEncounterGroupStreamingAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LaunchPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreventLaunchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContentLockRadius;
    
    SWGAME_API FRandomEventEncounterGroupStreamingAreaData();
};

