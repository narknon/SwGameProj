#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsConstraintPathEntry.generated.h"

USTRUCT(BlueprintType)
struct FRsConstraintPathEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    RSGAMETECHRT_API FRsConstraintPathEntry();
};

