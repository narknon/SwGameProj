#pragma once
#include "CoreMinimal.h"
#include "ERsAttackerDirection.h"
#include "RsDirectionalAnimData.h"
#include "RsAttackerDirectionBasedSyncData.generated.h"

class URsSyncDefinition;

UCLASS(Blueprintable)
class URsAttackerDirectionBasedSyncData : public URsDirectionalAnimData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsAttackerDirection, URsSyncDefinition*> DirectionalSyncDefDataMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSyncDefinition* DefaultSyncDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReactorAsMasterForSync;
    
public:
    URsAttackerDirectionBasedSyncData();
};

