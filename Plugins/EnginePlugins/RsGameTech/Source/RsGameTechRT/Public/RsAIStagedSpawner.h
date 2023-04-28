#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERsAISpawnResult.h"
#include "RsAISpawnAnimationDef.h"
#include "RsAISpawner.h"
#include "RsAIStagedSpawnerInstance.h"
#include "RsAIStagedSpawner.generated.h"

class AActor;
class ARsAICharacter;
class USceneComponent;

UCLASS(Blueprintable)
class ARsAIStagedSpawner : public ARsAISpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAISpawnAnimationDef> SpawnAnimationDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnNoPhysicsNoCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLeashingBoundsAfterSpawnIntro;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAIStagedSpawnerInstance> SpawnerInstances;
    
public:
    ARsAIStagedSpawner();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerStagedSpawner();
    
    UFUNCTION(BlueprintCallable)
    void SpawnAIAtSceneComponent(int32 SpawnerSlot, const USceneComponent* SceneComponent, bool bIgnoreSpawnAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAIAtLocation(int32 SpawnerSlot, const FVector& SpawnLocation, const FRotator& SpawnRotation, bool bIgnoreSpawnAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAIAtActor(int32 SpawnerSlot, const AActor* Actor, bool bIgnoreSpawnAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSleepFromEncounterGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSemiSleepFromEncounterGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAwakeFromEncounterGroup();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAISpawnedFromAnySlot(ARsAICharacter* SpawnedAI, TEnumAsByte<ERsAISpawnResult::Type> SpawnResult);
    
};

