#pragma once
#include "CoreMinimal.h"
#include "RsSoftStateObject.h"
#include "RsStateBlueprintBase.generated.h"

class UObject;

UCLASS(Blueprintable)
class URsStateBlueprintBase : public URsSoftStateObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBPTickImplemetation;
    
public:
    URsStateBlueprintBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_TickState(UObject* StateOwner, float DelataTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEndState(UObject* StateOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBeginState(UObject* StateOwner);
    
    UFUNCTION(BlueprintCallable)
    void FinishState();
    
};

