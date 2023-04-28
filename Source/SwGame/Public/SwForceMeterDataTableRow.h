#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SwForceMeterDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwForceMeterDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceAmountImmediate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceAmountImmediatePercentageOfMaxBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceAmountImmediatePercentageOfRemainingBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceAmountOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenerationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinForceRequired;
    
    FSwForceMeterDataTableRow();
};

