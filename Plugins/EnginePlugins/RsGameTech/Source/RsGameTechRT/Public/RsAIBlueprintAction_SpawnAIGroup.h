#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ERsAISpawnResult.h"
#include "RsAIAllDiedDelegateDelegate.h"
#include "RsAIMultiSpawnCompletedDelegateDelegate.h"
#include "RsAISingleSpawnedDelegateDelegate.h"
#include "RsAIBlueprintAction_SpawnAIGroup.generated.h"

class ARsAICharacter;
class ARsAISpawner;
class UObject;
class URsAIBlueprintAction_SpawnAIGroup;

UCLASS(Blueprintable)
class URsAIBlueprintAction_SpawnAIGroup : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIMultiSpawnCompletedDelegate Completed;
    
    URsAIBlueprintAction_SpawnAIGroup();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URsAIBlueprintAction_SpawnAIGroup* SpawnAIGroup(UObject* WorldContextObject, const TArray<ARsAISpawner*>& Spawners, const FRsAISingleSpawnedDelegate& OnMemberSpawned, const FRsAIAllDiedDelegate& OnGroupDied, float SpawnDelay, float SpawnInterval);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteOnSingleAISpawned(ARsAICharacter* SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteOnAllAISpawned(const TArray<ARsAICharacter*>& SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult);
    
};

