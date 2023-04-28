#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "ERsAIDespawnReason.h"
#include "RsAIOnAIDespawnedDelegateDelegate.h"
#include "RsAIOnAISpawnedDelegateDelegate.h"
#include "RsAISingleSpawnedDelegateDelegate.h"
#include "RsAISpawnerRef.h"
#include "RsAISpawningSystem.generated.h"

class AActor;
class ARsAIDefaultSpawner;
class ARsAISpawner;
class UObject;
class URsAICharacterDefinition;

UCLASS(Blueprintable)
class URsAISpawningSystem : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ARsAISpawner*> SpawnersNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsAIDefaultSpawner* DefaultSpawner;
    
public:
    URsAISpawningSystem();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnbindEventFromAISpawned(UObject* WorldContext, const FRsAISpawnerRef& SpawnerRef, const FRsAIOnAISpawnedDelegate& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnbindAllEventsFromAISpawned(UObject* WorldContext, const FRsAISpawnerRef& SpawnerRef);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnbindAllEventsFromAIDespawned(UObject* WorldContext, const FRsAISpawnerRef& SpawnerRef);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnbindAllAISpawnedEventsMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnbindAllAIDespawnedEventsMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnbindAISpawnedEventMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, const FRsAIOnAISpawnedDelegate& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnbindAIDespawnedEventMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, const FRsAIOnAIDespawnedDelegate& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SpawnAIForArray(UObject* WorldContext, const TArray<FRsAISpawnerRef>& SpawnerRefs, float SpawnDelay);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContext"))
    static void SpawnAI_Internal(UObject* WorldContext, FLatentActionInfo LatentInfo, const FRsAIOnAISpawnedDelegate& OnAISpawned, const FRsAISpawnerRef& SpawnerRef, float SpawnDelay);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedAIDied(AActor* DeadActor);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnedAIDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void EnableSpawnerMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DespawnAllAI(UObject* WorldContext, TEnumAsByte<ERsAIDespawnReason::Type> DespawnReason);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DespawnAIMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, TEnumAsByte<ERsAIDespawnReason::Type> DespawnReason);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DebugSpawnAI(UObject* WorldContext, URsAICharacterDefinition* AICharacterDefinition, const FRsAISingleSpawnedDelegate& OnAISpawnedDelegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BindEventToAISpawnedForArray(UObject* WorldContext, const TArray<FRsAISpawnerRef>& SpawnerRefs, const FRsAIOnAISpawnedDelegate& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BindEventToAISpawned(UObject* WorldContext, const FRsAISpawnerRef& SpawnerRef, const FRsAIOnAISpawnedDelegate& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BindEventToAIDespawnedForArray(UObject* WorldContext, const TArray<FRsAISpawnerRef>& SpawnerRefs, const FRsAIOnAIDespawnedDelegate& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BindEventToAIDespawned(UObject* WorldContext, const FRsAISpawnerRef& SpawnerRef, const FRsAIOnAIDespawnedDelegate& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BindAISpawnedEventMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, const FRsAIOnAISpawnedDelegate& Event);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BindAIDespawnedEventMulti(UObject* WorldContext, const TArray<ARsAISpawner*>& Spawners, const FRsAIOnAIDespawnedDelegate& Event);
    
};

