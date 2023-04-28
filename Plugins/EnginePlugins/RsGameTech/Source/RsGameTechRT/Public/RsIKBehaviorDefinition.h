#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsIKBehaviorDefinition.generated.h"

UCLASS(Blueprintable)
class URsIKBehaviorDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    URsIKBehaviorDefinition();
};

