#pragma once
#include "CoreMinimal.h"
#include "Rs/RsAISpawnerNarrativeSettings.h"
#include "RsAIScriptingOptions.h"
#include "RsAISimpleSpawnerInstance.h"
#include "RsAISpawner.h"
#include "RsAISpawnerIKRigSettings.h"
#include "RsAISpawnerIntroSettings.h"
#include "RsAISpawnerLeashSettings.h"
#include "RsAISpawnerPOISettings.h"
#include "RsAISpawnerPatrolSettings.h"
#include "RsAISpawnerRef.h"
#include "RsAISpawnerWanderSettings.h"
#include "RsAICharacterSpawner.generated.h"

class ARsAICharacter;

UCLASS(Blueprintable)
class ARsAICharacterSpawner : public ARsAISpawner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerRef SpawnerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRsAISimpleSpawnerInstance SimpleSpawnerInstance;
    
public:
    ARsAICharacterSpawner();
    UFUNCTION(BlueprintCallable)
    void SetSpawnerWanderSettings(FRsAISpawnerWanderSettings SpawnerWanderSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerScriptingSettings(FRsAIScriptingOptions SpawnerScriptingSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerPOISettings(FRsAISpawnerPOISettings SpawnerPOISettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerPatrolSettings(FRsAISpawnerPatrolSettings SpawnerPatrolSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerNarrativeSettings(FRsAISpawnerNarrativeSettings SpawnerNarrativeSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerIntroSettings(FRsAISpawnerIntroSettings SpawnerIntroSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerIKRigSettings(FRsAISpawnerIKRigSettings SpawnerIKRigSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerAdvancedSettings(bool bAutoSpawn, FName GroupName, FName OverrideSyncSlotName, int32 SpawnMax, float SpawnDelay, bool bEnabled, bool bAllowSpawnOffNavMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetLeashSettings(FRsAISpawnerLeashSettings SpawnerLeashSettings);
    
    UFUNCTION(BlueprintCallable)
    FRsAISpawnerNarrativeSettings GetSpawnerNarrativeSettings();
    
    UFUNCTION(BlueprintCallable)
    FRsAISpawnerIntroSettings GetSpawnerIntroSettings();
    
    UFUNCTION(BlueprintCallable)
    FRsAISpawnerIKRigSettings GetSpawnerIKRigSettings();
    
    UFUNCTION(BlueprintCallable)
    void GetSpawnerAdvancedSettings(bool& bAutoSpawn, FName& GroupName, FName& OverrideSyncSlotName, int32& SpawnMax, float& SpawnDelay, bool& bEnabled, bool& bAllowSpawnOffNavMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARsAICharacter*> GetSpawnedAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARsAICharacter* GetFirstCurrentlySpawnedAI() const;
    
};

