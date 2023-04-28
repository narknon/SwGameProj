#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EShipLaneShipTypes.h"
#include "ShipLaneShips.generated.h"

class UMaterialInstance;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FShipLaneShips : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ShipMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> ShipMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShipLaneShipTypes ShipType;
    
    SWGAME_API FShipLaneShips();
};

