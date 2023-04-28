#include "RsInputActionDefinition.h"

ERsQueueActionCheckResult URsInputActionDefinition::PreQueueActionCheckReturnFunctionSignature(FName InActionName) {
    return ERsQueueActionCheckResult::WontDoAction;
}

void URsInputActionDefinition::PreQueueActionCheckRefParamFunctionSignature(FName InActionName, ERsQueueActionCheckResult& Result) {
}

void URsInputActionDefinition::PopulateActionNameList(UObject* ContextObject, TArray<FName>& Options) {
}

void URsInputActionDefinition::FunctionSignature() {
}

bool URsInputActionDefinition::BoolReturnFunctionSignature(FName InActionName) {
    return false;
}

void URsInputActionDefinition::BoolRefParamFunctionSignature(FName InActionName, bool& Result) {
}

URsInputActionDefinition::URsInputActionDefinition() {
    // Null default object.
}

