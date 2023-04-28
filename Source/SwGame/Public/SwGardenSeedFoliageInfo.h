#pragma once
#include "CoreMinimal.h"
#include "SwGardenSeedFoliageInfo.generated.h"

class AInstancedFoliageActor;
class UHierarchicalInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FSwGardenSeedFoliageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AInstancedFoliageActor> InstancedFoliageActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHierarchicalInstancedStaticMeshComponent> InstancedFoliageStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InstancedFoliageActorLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FoliageInstanceIndices;
    
    SWGAME_API FSwGardenSeedFoliageInfo();
};

