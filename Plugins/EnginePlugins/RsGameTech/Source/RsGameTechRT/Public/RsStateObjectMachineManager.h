#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "StateMachineHandle.h"
#include "Templates/SubclassOf.h"
#include "RsStateObjectMachineManager.generated.h"

class UObject;
class URsGenericStateMachine;
class URsSoftStateObject;

UCLASS(Blueprintable)
class URsStateObjectMachineManager : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UObject>, URsGenericStateMachine*> PrimaryStateMachines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<URsGenericStateMachine*> StateMachineContainer;
    
public:
    URsStateObjectMachineManager();
    UFUNCTION(BlueprintCallable)
    void StopStateMachineEx(UPARAM(Ref) FStateMachineHandle& StateMachineHandle);
    
    UFUNCTION(BlueprintCallable)
    void StopPrimaryStateMachine(UObject* TheObject);
    
    UFUNCTION(BlueprintCallable)
    void SetStateEx(UPARAM(Ref) FStateMachineHandle& StateMachineHandle, URsSoftStateObject* NewStateTemplate, bool bStackState);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateByNameEx(UPARAM(Ref) FStateMachineHandle& StateMachineHandle, FName NewStateName, bool bRestartState, bool bStackState, bool AssertOnNotFound);
    
    UFUNCTION(BlueprintCallable)
    bool SetPrimaryStateByName(UObject* TheObject, FName NewStateName, bool bRestartState, bool bStackState, bool AssertOnNotFound);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryState(UObject* TheObject, URsSoftStateObject* NewStateTemplate, bool bStackState);
    
    UFUNCTION(BlueprintCallable)
    bool IsStateMachineInState(UPARAM(Ref) FStateMachineHandle& StateMachineHandle, FName StateName, bool AssertOnNotFound);
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentStateName(UPARAM(Ref) FStateMachineHandle& StateMachineHandle);
    
    UFUNCTION(BlueprintCallable)
    FStateMachineHandle ActivateStateMachineEx(UObject* TheObject, TSubclassOf<URsGenericStateMachine> StateMachineType);
    
    UFUNCTION(BlueprintCallable)
    FStateMachineHandle ActivatePrimaryStateMachine(UObject* TheObject, TSubclassOf<URsGenericStateMachine> StateMachineType);
    
};

