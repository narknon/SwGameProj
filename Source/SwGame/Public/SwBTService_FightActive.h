#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SwBTService_FightActive.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTService_FightActive : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector StrafeDirectionKey;
    
public:
    USwBTService_FightActive();
};

