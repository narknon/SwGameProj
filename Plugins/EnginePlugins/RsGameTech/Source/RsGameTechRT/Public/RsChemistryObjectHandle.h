#pragma once
#include "CoreMinimal.h"
#include "RsChemistryObjectHandle.generated.h"

USTRUCT(BlueprintType)
struct FRsChemistryObjectHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectGeneration;
    
    RSGAMETECHRT_API FRsChemistryObjectHandle();
};

