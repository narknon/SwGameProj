#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "RsBTDecorator_SpawnedByCinematic.generated.h"

UCLASS(Blueprintable)
class URsBTDecorator_SpawnedByCinematic : public UBTDecorator {
    GENERATED_BODY()
public:
    URsBTDecorator_SpawnedByCinematic();
};

