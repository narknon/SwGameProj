#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ERsAISpawnResult.h"
#include "RsAIMultiSpawnCompletedDelegateDelegate.h"
#include "RsAIBlueprintAction_SpawnAIMulti.generated.h"

class ARsAICharacter;
class ARsAISpawner;
class UObject;
class URsAIBlueprintAction_SpawnAIMulti;

UCLASS(Blueprintable)
class URsAIBlueprintAction_SpawnAIMulti : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIMultiSpawnCompletedDelegate Completed;
    
    URsAIBlueprintAction_SpawnAIMulti();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URsAIBlueprintAction_SpawnAIMulti* SpawnAIMulti(UObject* WorldContextObject, const TArray<ARsAISpawner*>& Spawners, float SpawnDelay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteOnAllAISpawned(const TArray<ARsAICharacter*>& SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult);
    
};

