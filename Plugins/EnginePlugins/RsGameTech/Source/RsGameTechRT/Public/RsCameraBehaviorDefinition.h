#pragma once
#include "CoreMinimal.h"
#include "RsBaseCameraBehaviorDefinition.h"
#include "RsCameraBehaviorDefinition.generated.h"

class URsCameraBehavior;

UCLASS(Blueprintable)
class URsCameraBehaviorDefinition : public URsBaseCameraBehaviorDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsCameraBehavior* Behavior;
    
public:
    URsCameraBehaviorDefinition();
};

