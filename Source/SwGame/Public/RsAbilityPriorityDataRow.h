#pragma once
#include "CoreMinimal.h"
#include "RsAbilityPriorityDataRow.generated.h"

USTRUCT(BlueprintType)
struct FRsAbilityPriorityDataRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    SWGAME_API FRsAbilityPriorityDataRow();
};

