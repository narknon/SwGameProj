#pragma once
#include "CoreMinimal.h"
#include "Rs/PropertyOverrides.h"
#include "RsBaseCameraBehaviorDefinition.h"
#include "RsVariantCameraBehaviorDefinition.generated.h"

class URsCameraBehavior;
class URsCameraBehaviorDefinition;

UCLASS(Blueprintable)
class URsVariantCameraBehaviorDefinition : public URsBaseCameraBehaviorDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCameraBehaviorDefinition* BehaviorDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyOverrides Overrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsCameraBehavior* Behavior;
    
public:
    URsVariantCameraBehaviorDefinition();
};

