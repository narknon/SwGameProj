#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_ParallelStateDefinition.h"
#include "SwSimpleDestructible_ParallelStateOnFirstComponentHit.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_ParallelStateOnFirstComponentHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_ParallelStateDefinition ParallelStates;
    
    FSwSimpleDestructible_ParallelStateOnFirstComponentHit();
};

