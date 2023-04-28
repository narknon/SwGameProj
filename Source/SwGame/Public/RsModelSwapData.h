#pragma once
#include "CoreMinimal.h"
#include "RsModelSwapData.generated.h"

class UMaterialInterface;
class UStaticMesh;

USTRUCT(BlueprintType)
struct SWGAME_API FRsModelSwapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MeshToSwapIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialsToSwapIn;
    
    FRsModelSwapData();
};

