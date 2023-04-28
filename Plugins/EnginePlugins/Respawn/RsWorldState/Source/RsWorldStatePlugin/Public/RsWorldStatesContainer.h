#pragma once
#include "CoreMinimal.h"
#include "EWorldStatesContainerType.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldStatesContainer.generated.h"

USTRUCT(BlueprintType)
struct RSWORLDSTATEPLUGIN_API FRsWorldStatesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldStatesContainerType CompletionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldStateNodeRef> nodeRefs;
    
    FRsWorldStatesContainer();
};

