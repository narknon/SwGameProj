#include "RsWorldStateBlueprintLibrary.h"

void URsWorldStateBlueprintLibrary::UnregisterForOnCompletionChanged_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode, FRsWorldStateNodeChangedDelegate Delegate) {
}

void URsWorldStateBlueprintLibrary::UnregisterForNewMostRecentlyChanged_WorldStateNode(FRsWorldStateNodeChangedDelegate Delegate) {
}

void URsWorldStateBlueprintLibrary::SetValue_WorldStateNodeInteger(const FRsWorldStateNodeRef_Integer& WorldStateNode, int32 NewValue, bool bResetIfDieWithoutSaving, bool bDebug) {
}

void URsWorldStateBlueprintLibrary::SetValue_WorldStateNodeActor(const FRsWorldStateNodeRef_Actor& WorldStateNode, AActor* NewValue, bool bResetIfDieWithoutSaving, bool bDebug) {
}

void URsWorldStateBlueprintLibrary::SetIgnoreWorldStateWarningsForSession(UObject* WorldContext, bool bIgnore) {
}

void URsWorldStateBlueprintLibrary::SetHasAcceptedWorldStateErrors(UObject* WorldContext, bool bHasAccepted) {
}

void URsWorldStateBlueprintLibrary::SetCompleted_WorldStateNodes(TArray<FRsWorldStateNodeRef> WorldStateNodes, bool bNewValue, bool bResetIfDieWithoutSaving, bool bDebug) {
}

void URsWorldStateBlueprintLibrary::SetCompleted_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode, bool bNewValue, bool bResetIfDieWithoutSaving, bool bDebug) {
}

void URsWorldStateBlueprintLibrary::RegisterForOnCompletionChanged_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode, FRsWorldStateNodeChangedDelegate Delegate, bool bCallAfterRegistering) {
}

void URsWorldStateBlueprintLibrary::RegisterForNewMostRecentlyChanged_WorldStateNode(FRsWorldStateNodeChangedDelegate Delegate) {
}

void URsWorldStateBlueprintLibrary::MakeRsWorldStateNodeRef(URsWorldStateDefinition* Definition, FGuid NodeGuid, FGenericStruct& ReturnValue) {
}

bool URsWorldStateBlueprintLibrary::IsValid_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode) {
    return false;
}

bool URsWorldStateBlueprintLibrary::IsReadyToBeCompleted_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode) {
    return false;
}

bool URsWorldStateBlueprintLibrary::IsNodeTypeStartOrEnd(const FRsWorldStateNodeRef& InNodeRef) {
    return false;
}

bool URsWorldStateBlueprintLibrary::IsCompleted_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode) {
    return false;
}

bool URsWorldStateBlueprintLibrary::IsBetweenWorldStateNodes(const FRsWorldStateNodeRef& FirstNode, const FRsWorldStateNodeRef& SecondNode) {
    return false;
}

int32 URsWorldStateBlueprintLibrary::IncrementValue_WorldStateNodeInteger(const FRsWorldStateNodeRef_Integer& WorldStateNode, bool bResetIfDieWithoutSaving, bool bDebug) {
    return 0;
}

int32 URsWorldStateBlueprintLibrary::GetValue_WorldStateNodeInteger(const FRsWorldStateNodeRef_Integer& WorldStateNode) {
    return 0;
}

void URsWorldStateBlueprintLibrary::GetValue_WorldStateNodeActor(const FRsWorldStateNodeRef_Actor& WorldStateNode, FString& OutPathName, AActor*& OutActorIfLoaded, bool& OutValueIsNull) {
}

FString URsWorldStateBlueprintLibrary::GetPathName_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode) {
    return TEXT("");
}

FRsWorldStateNodeRef URsWorldStateBlueprintLibrary::GetMostRecentlyChangedOptionalNode(UObject* WorldContext) {
    return FRsWorldStateNodeRef{};
}

FRsWorldStateNodeRef URsWorldStateBlueprintLibrary::GetMostRecentlyChangedMandatoryNode(UObject* WorldContext) {
    return FRsWorldStateNodeRef{};
}

bool URsWorldStateBlueprintLibrary::GetHasAcceptedWorldStateErrors(UObject* WorldContext) {
    return false;
}

FString URsWorldStateBlueprintLibrary::GetDisplayName_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode) {
    return TEXT("");
}

TArray<FRsWorldStateNodeRef> URsWorldStateBlueprintLibrary::FindNonOptionalReadyToBeCompletedWorldStateNodes(UObject* WorldContext) {
    return TArray<FRsWorldStateNodeRef>();
}

bool URsWorldStateBlueprintLibrary::ConfirmNodeIsBooleanType(const FRsWorldStateNodeRef& InNodeRef) {
    return false;
}

void URsWorldStateBlueprintLibrary::ClearAllWorldStateProgress(UObject* WorldContext) {
}

void URsWorldStateBlueprintLibrary::AddWorldStateErrorMissingNodes(UObject* WorldContext, const TArray<FRsWorldStateNodeRef>& MissingNodes) {
}

void URsWorldStateBlueprintLibrary::AddWorldStateErrorFixedUpNodes(UObject* WorldContext, const TArray<FRsWorldStateNodeRef>& FixedUpNodes) {
}

URsWorldStateBlueprintLibrary::URsWorldStateBlueprintLibrary() {
    // Null default object.
}

