#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeTypeInstanceData.h"
#include "RsWorldStateNodeType_IntegerInstanceData.generated.h"

UCLASS(Blueprintable)
class URsWorldStateNodeType_IntegerInstanceData : public URsWorldStateNodeTypeInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    URsWorldStateNodeType_IntegerInstanceData();
};

