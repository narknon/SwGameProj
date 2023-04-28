#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsWorldStateNodeInstance.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldStateNodeSaveData.h"
#include "RsWorldStateInstance.generated.h"

USTRUCT(BlueprintType)
struct RSWORLDSTATEPLUGIN_API FRsWorldStateInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FRsWorldStateNodeInstance> RuntimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FRsWorldStateNodeSaveData> SaveGameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreWorldStateWarningsForSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasAcceptedWorldStateErrors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAcceptedWorldStateErrorsSinceLastSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldStateNodeRef> WorldStateError_FixedUpNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldStateNodeRef> WorldStateError_MissingNodes;
    
    FRsWorldStateInstance();
};

