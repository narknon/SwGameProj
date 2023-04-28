#include "StateObjectMachineTransition.h"

void UStateObjectMachineTransition::K2_OnTransition(UObject* OwnerObject, URsSoftStateObject* NewState, URsSoftStateObject* PreviousState) {
}

bool UStateObjectMachineTransition::K2_EvaluateTransition(UObject* OwnerObject) {
    return false;
}

UStateObjectMachineTransition::UStateObjectMachineTransition() {
    // Null default object.
}

