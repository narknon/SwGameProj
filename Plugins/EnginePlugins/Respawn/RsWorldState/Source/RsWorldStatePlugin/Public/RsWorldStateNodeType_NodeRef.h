#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldStateNodeType.h"
#include "RsWorldStateNodeType_NodeRef.generated.h"

UCLASS(Blueprintable)
class URsWorldStateNodeType_NodeRef : public URsWorldStateNodeType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateNodeRef NodeRef;
    
    URsWorldStateNodeType_NodeRef();
protected:
    UFUNCTION(BlueprintCallable)
    void OnNodeRefCompletionChanged(FRsWorldStateNodeRef EndNodeRef, bool bWasCompleted);
    
};

