#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SwResourceMeterDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwResourceMeterDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountImmediate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountImmediatePercentageOfMaxBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountImmediatePercentageOfRemainingBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenerationMultiplier;
    
    FSwResourceMeterDataTableRow();
};

