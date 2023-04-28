#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsStateObjectMachine.generated.h"

class URsSoftStateObject;
class UStateObjectMachineTransition;

UCLASS(Blueprintable)
class URsStateObjectMachine : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnToInitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsSoftStateObject* OverrideInitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStateObjectMachineTransition*> IdleTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsSoftStateObject* CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsSoftStateObject* PendingState;
    
public:
    URsStateObjectMachine();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Tick(UObject* OwningObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_EndPlay(UObject* OwningObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_BeginPlay(UObject* OwningObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsSoftStateObject* GetCurrentState();
    
};

