#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeTypeInstanceData.h"
#include "RsWorldStateNodeType_ActorInstanceData.generated.h"

class AActor;

UCLASS(Blueprintable)
class URsWorldStateNodeType_ActorInstanceData : public URsWorldStateNodeTypeInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> CurrentValue;
    
    URsWorldStateNodeType_ActorInstanceData();
};

