#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_ParallelStateDefinition.h"
#include "SwSimpleDestructible_ParallelStateOnFirstComponentHit.h"
#include "SwSimpleDestructible_ParallelStates.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_ParallelStates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseParallelStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreForcePull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_ParallelStateDefinition Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_ParallelStateDefinition FrontHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_ParallelStateDefinition BackHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_ParallelStateDefinition ForcePush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSimpleDestructible_ParallelStateDefinition ForcePull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSimpleDestructible_ParallelStateOnFirstComponentHit> FirstHitComponents;
    
    FSwSimpleDestructible_ParallelStates();
};

