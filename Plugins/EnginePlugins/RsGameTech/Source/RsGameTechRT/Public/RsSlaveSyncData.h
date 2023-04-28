#pragma once
#include "CoreMinimal.h"
#include "RsSyncData.h"
#include "RsSlaveSyncData.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsSlaveSyncData : public FRsSyncData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaintainRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaintainRelativeRotationYawOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PutInReactionState;
    
    FRsSlaveSyncData();
};

