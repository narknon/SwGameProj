#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RegionalText.h"
#include "EULALocalizedTextRow.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FEULALocalizedTextRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StandardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRegionalText> RegionalText;
    
    FEULALocalizedTextRow();
};

