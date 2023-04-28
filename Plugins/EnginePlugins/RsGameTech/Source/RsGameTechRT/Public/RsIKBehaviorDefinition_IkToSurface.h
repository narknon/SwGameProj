#pragma once
#include "CoreMinimal.h"
#include "RsIKBehaviorDefinition.h"
#include "RsIKBehaviorDefinition_IkToSurface.generated.h"

UCLASS(Blueprintable)
class URsIKBehaviorDefinition_IkToSurface : public URsIKBehaviorDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedFootPenetration;
    
    URsIKBehaviorDefinition_IkToSurface();
};

