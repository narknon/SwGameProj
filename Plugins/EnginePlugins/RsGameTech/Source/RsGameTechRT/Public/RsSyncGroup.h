#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsSyncGroup.generated.h"

class AActor;
class URsMasterSyncInstance;
class URsSlaveSyncInstance;

USTRUCT(BlueprintType)
struct FRsSyncGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsMasterSyncInstance* Master;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsSlaveSyncInstance*> SlaveArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> ExSlaveActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MasterNavMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MasterNavMeshOffsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MasterNavMeshOffsetImmediate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InitialSyncZ;
    
    RSGAMETECHRT_API FRsSyncGroup();
};

