#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RsNavAssistGeneratedDataRegion.h"
#include "RsNavAssistGeneratedData.generated.h"

USTRUCT(BlueprintType)
struct FRsNavAssistGeneratedData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsNavAssistGeneratedDataRegion> GeneratedData;
    
    RSGAMETECHRT_API FRsNavAssistGeneratedData();
};

