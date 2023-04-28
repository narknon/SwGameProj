#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "RsWorldStateNode.h"
#include "RsWorldStateDefinition.generated.h"

class UGameInstance;

UCLASS(Blueprintable)
class URsWorldStateDefinition : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldStateNode> StateNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, int32> StateNodesIndexMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGameInstance> PersistentGameInstancePtr;
    
public:
    URsWorldStateDefinition();
};

