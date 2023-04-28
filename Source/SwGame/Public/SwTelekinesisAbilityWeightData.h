#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SwForceMeterRow.h"
#include "SwTelekinesisControlData.h"
#include "SwTelekinesisAbilityWeightData.generated.h"

USTRUCT(BlueprintType)
struct FSwTelekinesisAbilityWeightData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwForceMeterRow ForceMeterRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwTelekinesisControlData ControlData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseScale;
    
    SWGAME_API FSwTelekinesisAbilityWeightData();
};

