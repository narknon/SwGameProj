#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SwBTService_FightPassive.generated.h"

UCLASS(Blueprintable)
class USwBTService_FightPassive : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector StrafeDirectionKey;
    
public:
    USwBTService_FightPassive();
};

