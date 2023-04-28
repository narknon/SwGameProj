#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "SwBTService_BuddySelectAttachPoint.generated.h"

UCLASS(Blueprintable)
class USwBTService_BuddySelectAttachPoint : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachDecayAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimalStayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreBackpackWhenDiceRoll;
    
public:
    USwBTService_BuddySelectAttachPoint();
};

