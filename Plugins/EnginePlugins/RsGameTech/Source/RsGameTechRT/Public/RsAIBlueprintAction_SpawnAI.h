#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ERsAISpawnResult.h"
#include "RsAISingleSpawnCompletedDelegateDelegate.h"
#include "RsAIBlueprintAction_SpawnAI.generated.h"

class ARsAICharacter;
class ARsAISpawner;
class URsAIBlueprintAction_SpawnAI;

UCLASS(Blueprintable)
class URsAIBlueprintAction_SpawnAI : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISingleSpawnCompletedDelegate Completed;
    
    URsAIBlueprintAction_SpawnAI();
    UFUNCTION(BlueprintCallable)
    static URsAIBlueprintAction_SpawnAI* SpawnAI(ARsAISpawner* Spawner, float SpawnDelay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteOnAllAISpawned(const TArray<ARsAICharacter*>& SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult);
    
};

