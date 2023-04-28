#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_MaterialInstance.h"
#include "SwSimpleDestructible_CommonMaterialInstances.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_CommonMaterialInstances {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSimpleDestructible_MaterialInstance> MaterialInstances;
    
    FSwSimpleDestructible_CommonMaterialInstances();
};

