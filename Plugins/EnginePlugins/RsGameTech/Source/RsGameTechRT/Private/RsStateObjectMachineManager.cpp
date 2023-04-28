#include "RsStateObjectMachineManager.h"
#include "Templates/SubclassOf.h"

void URsStateObjectMachineManager::StopStateMachineEx(FStateMachineHandle& StateMachineHandle) {
}

void URsStateObjectMachineManager::StopPrimaryStateMachine(UObject* TheObject) {
}

void URsStateObjectMachineManager::SetStateEx(FStateMachineHandle& StateMachineHandle, URsSoftStateObject* NewStateTemplate, bool bStackState) {
}

bool URsStateObjectMachineManager::SetStateByNameEx(FStateMachineHandle& StateMachineHandle, FName NewStateName, bool bRestartState, bool bStackState, bool AssertOnNotFound) {
    return false;
}

bool URsStateObjectMachineManager::SetPrimaryStateByName(UObject* TheObject, FName NewStateName, bool bRestartState, bool bStackState, bool AssertOnNotFound) {
    return false;
}

void URsStateObjectMachineManager::SetPrimaryState(UObject* TheObject, URsSoftStateObject* NewStateTemplate, bool bStackState) {
}

bool URsStateObjectMachineManager::IsStateMachineInState(FStateMachineHandle& StateMachineHandle, FName StateName, bool AssertOnNotFound) {
    return false;
}

FName URsStateObjectMachineManager::GetCurrentStateName(FStateMachineHandle& StateMachineHandle) {
    return NAME_None;
}

FStateMachineHandle URsStateObjectMachineManager::ActivateStateMachineEx(UObject* TheObject, TSubclassOf<URsGenericStateMachine> StateMachineType) {
    return FStateMachineHandle{};
}

FStateMachineHandle URsStateObjectMachineManager::ActivatePrimaryStateMachine(UObject* TheObject, TSubclassOf<URsGenericStateMachine> StateMachineType) {
    return FStateMachineHandle{};
}

URsStateObjectMachineManager::URsStateObjectMachineManager() {
    // Null default object.
}

