#pragma once
#include "CoreMinimal.h"
#include "RsIKBehaviorDefinition.h"
#include "RsIKBehaviorDefinition_LockingHeelLiftAdjustment.generated.h"

UCLASS(Blueprintable)
class URsIKBehaviorDefinition_LockingHeelLiftAdjustment : public URsIKBehaviorDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    URsIKBehaviorDefinition_LockingHeelLiftAdjustment();
};

