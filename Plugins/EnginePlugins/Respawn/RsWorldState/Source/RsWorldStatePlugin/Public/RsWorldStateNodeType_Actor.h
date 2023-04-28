#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeType.h"
#include "RsWorldStateNodeType_Actor.generated.h"

class AActor;

UCLASS(Blueprintable)
class URsWorldStateNodeType_Actor : public URsWorldStateNodeType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> DebugCompletionOptions;
    
    URsWorldStateNodeType_Actor();
};

