#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldStateNodeType.h"
#include "RsWorldStateNodeType_Definition.generated.h"

class URsWorldStateDefinition;

UCLASS(Blueprintable)
class URsWorldStateNodeType_Definition : public URsWorldStateNodeType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsWorldStateDefinition* Definition;
    
    URsWorldStateNodeType_Definition();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDefinitionCompletionChanged(FRsWorldStateNodeRef EndNodeRef, bool bWasCompleted);
    
};

