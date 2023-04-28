#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ERsAISpawnResult.h"
#include "RsAIEncounterSpawnCompletedDelegateDelegate.h"
#include "RsAISingleSpawnedDelegateDelegate.h"
#include "RsAIBlueprintAction_SpawnAIEncounterGroup.generated.h"

class ARsAICharacter;
class ARsAIEncounterGroup;
class UObject;
class URsAIBlueprintAction_SpawnAIEncounterGroup;

UCLASS(Blueprintable)
class URsAIBlueprintAction_SpawnAIEncounterGroup : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIEncounterSpawnCompletedDelegate Completed;
    
    URsAIBlueprintAction_SpawnAIEncounterGroup();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URsAIBlueprintAction_SpawnAIEncounterGroup* SpawnAIEncounterGroup(UObject* WorldContextObject, ARsAIEncounterGroup* EncounterGroup, const FRsAISingleSpawnedDelegate& OnMemberSpawned);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteOnSingleAISpawned(ARsAICharacter* SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteOnEncounterGroupSpawnComplete(ARsAIEncounterGroup* InEncounterGroup);
    
};

