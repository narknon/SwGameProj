#pragma once
#include "CoreMinimal.h"
#include "RsChemistryElectricityConductibleState.generated.h"

USTRUCT(BlueprintType)
struct FRsChemistryElectricityConductibleState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bElectrified;
    
    RSGAMETECHRT_API FRsChemistryElectricityConductibleState();
};

