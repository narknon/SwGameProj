#pragma once
#include "CoreMinimal.h"
#include "RsDirectionalArrowConnectorData.generated.h"

USTRUCT(BlueprintType)
struct FRsDirectionalArrowConnectorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndReversed;
    
    RSGAMETECHRT_API FRsDirectionalArrowConnectorData();
};

