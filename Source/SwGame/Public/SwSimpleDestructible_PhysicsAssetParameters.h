#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_NewPhysicsAsset.h"
#include "SwSimpleDestructible_PhysicsAssetParameters.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_PhysicsAssetParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSimpleDestructible_NewPhysicsAsset> NewPhysicsAssets;
    
    FSwSimpleDestructible_PhysicsAssetParameters();
};

