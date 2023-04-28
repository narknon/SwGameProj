#pragma once
#include "CoreMinimal.h"
#include "ERsAttackSwingDirection.h"
#include "RsDirectionalAnimData.h"
#include "RsSwingDirectionBasedSyncData.generated.h"

class URsSyncDefinition;

UCLASS(Blueprintable)
class URsSwingDirectionBasedSyncData : public URsDirectionalAnimData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsAttackSwingDirection, URsSyncDefinition*> DirectionalSyncDefDataMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSyncDefinition* DefaultSyncDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReactorAsMasterForSync;
    
public:
    URsSwingDirectionBasedSyncData();
};

