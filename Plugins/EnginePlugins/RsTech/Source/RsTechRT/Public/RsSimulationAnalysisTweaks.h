#pragma once
#include "CoreMinimal.h"
#include "RsSimulationAnalysisTweaks.generated.h"

USTRUCT(BlueprintType)
struct FRsSimulationAnalysisTweaks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimulatedStates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SimulatedScratchpad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrapolateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrapolateTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtrapolateStates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ExtrapolateScratchpad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtrapolatedHistoryCount;
    
    RSTECHRT_API FRsSimulationAnalysisTweaks();
};

