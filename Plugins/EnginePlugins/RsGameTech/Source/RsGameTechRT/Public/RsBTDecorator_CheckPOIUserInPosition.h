#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_IsAtLocation.h"
#include "RsBTDecorator_CheckPOIUserInPosition.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_CheckPOIUserInPosition : public UBTDecorator_IsAtLocation {
    GENERATED_BODY()
public:
    URsBTDecorator_CheckPOIUserInPosition();
};

