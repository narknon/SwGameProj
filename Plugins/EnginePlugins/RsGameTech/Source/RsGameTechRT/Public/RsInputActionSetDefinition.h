#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsInputActionSetDefinition.generated.h"

class URsInputActionDefinition;

UCLASS(Blueprintable)
class URsInputActionSetDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsInputActionDefinition*> Actions;
    
    URsInputActionSetDefinition();
};

