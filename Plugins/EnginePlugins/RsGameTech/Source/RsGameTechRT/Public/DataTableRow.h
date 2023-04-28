#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DataTableRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    FDataTableRow();
};

