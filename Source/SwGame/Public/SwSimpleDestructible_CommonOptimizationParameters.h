#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_ComponentOptimizationParameters.h"
#include "SwSimpleDestructible_CommonOptimizationParameters.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_CommonOptimizationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSimpleDestructible_ComponentOptimizationParameters> ParamsPerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDestroyActorAfterFirstDamage;
    
    FSwSimpleDestructible_CommonOptimizationParameters();
};

