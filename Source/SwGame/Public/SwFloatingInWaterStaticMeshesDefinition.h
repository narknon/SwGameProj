#pragma once
#include "CoreMinimal.h"
#include "SwFloatingInWaterStaticMeshesDefinition.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct SWGAME_API FSwFloatingInWaterStaticMeshesDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMeshAsset;
    
    FSwFloatingInWaterStaticMeshesDefinition();
};

