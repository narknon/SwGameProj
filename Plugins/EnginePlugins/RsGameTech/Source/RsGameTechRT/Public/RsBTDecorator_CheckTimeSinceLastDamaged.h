#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "RsBTDecorator_CheckTimeSinceLastDamaged.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_CheckTimeSinceLastDamaged : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageWindow;
    
public:
    URsBTDecorator_CheckTimeSinceLastDamaged();
};

