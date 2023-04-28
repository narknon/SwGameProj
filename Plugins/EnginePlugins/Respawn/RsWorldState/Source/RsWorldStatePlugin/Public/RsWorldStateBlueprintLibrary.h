#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "RsWorldStateNodeChangedDelegateDelegate.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldStateNodeRef_Actor.h"
#include "RsWorldStateNodeRef_Integer.h"
#include "RsWorldStateBlueprintLibrary.generated.h"

class AActor;
class UObject;
class URsWorldStateDefinition;

UCLASS(Blueprintable)
class URsWorldStateBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsWorldStateBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnregisterForOnCompletionChanged_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode, FRsWorldStateNodeChangedDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterForNewMostRecentlyChanged_WorldStateNode(FRsWorldStateNodeChangedDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void SetValue_WorldStateNodeInteger(const FRsWorldStateNodeRef_Integer& WorldStateNode, int32 NewValue, bool bResetIfDieWithoutSaving, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    static void SetValue_WorldStateNodeActor(const FRsWorldStateNodeRef_Actor& WorldStateNode, AActor* NewValue, bool bResetIfDieWithoutSaving, bool bDebug);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetIgnoreWorldStateWarningsForSession(UObject* WorldContext, bool bIgnore);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetHasAcceptedWorldStateErrors(UObject* WorldContext, bool bHasAccepted);
    
    UFUNCTION(BlueprintCallable)
    static void SetCompleted_WorldStateNodes(TArray<FRsWorldStateNodeRef> WorldStateNodes, bool bNewValue, bool bResetIfDieWithoutSaving, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    static void SetCompleted_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode, bool bNewValue, bool bResetIfDieWithoutSaving, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterForOnCompletionChanged_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode, FRsWorldStateNodeChangedDelegate Delegate, bool bCallAfterRegistering);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterForNewMostRecentlyChanged_WorldStateNode(FRsWorldStateNodeChangedDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeRsWorldStateNodeRef(URsWorldStateDefinition* Definition, FGuid NodeGuid, FGenericStruct& ReturnValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReadyToBeCompleted_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNodeTypeStartOrEnd(const FRsWorldStateNodeRef& InNodeRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompleted_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBetweenWorldStateNodes(const FRsWorldStateNodeRef& FirstNode, const FRsWorldStateNodeRef& SecondNode);
    
    UFUNCTION(BlueprintCallable)
    static int32 IncrementValue_WorldStateNodeInteger(const FRsWorldStateNodeRef_Integer& WorldStateNode, bool bResetIfDieWithoutSaving, bool bDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetValue_WorldStateNodeInteger(const FRsWorldStateNodeRef_Integer& WorldStateNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetValue_WorldStateNodeActor(const FRsWorldStateNodeRef_Actor& WorldStateNode, FString& OutPathName, AActor*& OutActorIfLoaded, bool& OutValueIsNull);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPathName_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FRsWorldStateNodeRef GetMostRecentlyChangedOptionalNode(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FRsWorldStateNodeRef GetMostRecentlyChangedMandatoryNode(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool GetHasAcceptedWorldStateErrors(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDisplayName_WorldStateNode(const FRsWorldStateNodeRef& WorldStateNode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<FRsWorldStateNodeRef> FindNonOptionalReadyToBeCompletedWorldStateNodes(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static bool ConfirmNodeIsBooleanType(const FRsWorldStateNodeRef& InNodeRef);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ClearAllWorldStateProgress(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void AddWorldStateErrorMissingNodes(UObject* WorldContext, const TArray<FRsWorldStateNodeRef>& MissingNodes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void AddWorldStateErrorFixedUpNodes(UObject* WorldContext, const TArray<FRsWorldStateNodeRef>& FixedUpNodes);
    
};

