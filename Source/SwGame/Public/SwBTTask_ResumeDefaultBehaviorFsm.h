#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SwBTTask_ResumeDefaultBehaviorFsm.generated.h"

UCLASS(Blueprintable)
class USwBTTask_ResumeDefaultBehaviorFsm : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetHomePosition;
    
public:
    USwBTTask_ResumeDefaultBehaviorFsm();
    UFUNCTION(BlueprintCallable)
    void SetResetHomePosition(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResetHomePosition() const;
    
};

