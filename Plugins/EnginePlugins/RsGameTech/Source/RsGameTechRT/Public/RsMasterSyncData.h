#pragma once
#include "CoreMinimal.h"
#include "RsSyncData.h"
#include "RsMasterSyncData.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsMasterSyncData : public FRsSyncData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
    FRsMasterSyncData();
};

