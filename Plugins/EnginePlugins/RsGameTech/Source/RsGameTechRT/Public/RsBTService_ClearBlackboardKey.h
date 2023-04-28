#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RsBTService_ClearBlackboardKey.generated.h"

UCLASS(Blueprintable)
class URsBTService_ClearBlackboardKey : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClearOnDeactivation: 1;
    
public:
    URsBTService_ClearBlackboardKey();
};

