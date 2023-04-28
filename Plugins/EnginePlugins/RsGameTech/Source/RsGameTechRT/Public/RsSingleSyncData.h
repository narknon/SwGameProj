#pragma once
#include "CoreMinimal.h"
#include "RsDirectionalAnimData.h"
#include "RsSingleSyncData.generated.h"

class URsSyncDefinition;

UCLASS(Blueprintable)
class URsSingleSyncData : public URsDirectionalAnimData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSyncDefinition* SyncDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReactorAsMasterForSync;
    
public:
    URsSingleSyncData();
};

