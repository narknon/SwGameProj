#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_ParallelStateDefinition.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_ParallelStateDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseEnd;
    
    FSwSimpleDestructible_ParallelStateDefinition();
};

