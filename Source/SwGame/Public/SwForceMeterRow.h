#pragma once
#include "CoreMinimal.h"
#include "SwForceMeterRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct SWGAME_API FSwForceMeterRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    FSwForceMeterRow();
};

