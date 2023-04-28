#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RsLoadStreamingDefinitionResultDelegate.h"
#include "RsLoadStreamingDefinitionAction.generated.h"

class UObject;
class URsLoadStreamingDefinitionAction;
class UWorld;

UCLASS(Blueprintable)
class URsLoadStreamingDefinitionAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsLoadStreamingDefinitionResult LoadedStreamingDefinitions;
    
    URsLoadStreamingDefinitionAction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URsLoadStreamingDefinitionAction* LoadStreamingDefinitions(UObject* WorldContextObject, TArray<FString> InStreamingDefinitionPaths);
    
};

