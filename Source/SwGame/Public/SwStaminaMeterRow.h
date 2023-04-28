#pragma once
#include "CoreMinimal.h"
#include "SwStaminaMeterRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct SWGAME_API FSwStaminaMeterRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    FSwStaminaMeterRow();
};

