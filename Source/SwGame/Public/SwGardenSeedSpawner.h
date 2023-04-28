#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SwGardenSeedFoliageInfo.h"
#include "Templates/SubclassOf.h"
#include "SwGardenSeedSpawner.generated.h"

class AInstancedFoliageActor;
class ASwGameDestructibleActor;
class UFoliageInstancedStaticMeshComponent;
class UFoliageType;
class UFoliageType_InstancedStaticMesh;
class UHierarchicalInstancedStaticMeshComponent;
class UStaticMesh;
class USwGardenSeedSpawnerData;

UCLASS(Blueprintable)
class SWGAME_API ASwGardenSeedSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwGameDestructibleActor> DefaultPlantToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGroundTestDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackupSpawnedPlantZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackupSpawnedPlantScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBackupSpawnWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBackupSpawnWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBackupSpawnDistanceToHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBackupSpawnDistanceToHero;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* BackupSpawnedPlant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BackupSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedBackupActorTestRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BackupSpawnRequestTime;
    
public:
    ASwGardenSeedSpawner();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGardenSeedSpawnerDataAsset(USwGardenSeedSpawnerData* SpawnerDataAsset, TArray<FSwGardenSeedFoliageInfo> SeedSpawnInfo, bool bClearPreviousData);
    
    UFUNCTION(BlueprintCallable)
    void SwapFoliageInstancesInVolume(UFoliageType* OriginalFoliageType, UFoliageType* ReplacementFoliageType, FBox BoxExtents, bool bBoxExtentsInWorldSpace);
    
    UFUNCTION(BlueprintCallable)
    void SpawnBackupRegisteredPlant();
    
    UFUNCTION(BlueprintCallable)
    void ReplaceSingleFoliageInstance(const AInstancedFoliageActor* InstancedFoliageActor, const UHierarchicalInstancedStaticMeshComponent* StaticMeshComponent, int32 FoliageIndex, const UFoliageType* ReplacementFoliageType);
    
    UFUNCTION(BlueprintCallable)
    bool HasFoliageInstanceOverlap(float ActorRadius);
    
    UFUNCTION(BlueprintCallable)
    UStaticMesh* GetStaticMeshFromFoliageType(UFoliageType_InstancedStaticMesh* FoliageType);
    
    UFUNCTION(BlueprintCallable)
    UFoliageInstancedStaticMeshComponent* FindOrAddFoliageStaticMeshComponent(const AInstancedFoliageActor* InstancedFoliageActor, const UFoliageType_InstancedStaticMesh* StaticMeshFoliageType);
    
    UFUNCTION(BlueprintCallable)
    UFoliageInstancedStaticMeshComponent* FindFoliageStaticMeshComponent(const AInstancedFoliageActor* InstancedFoliageActor, const UFoliageType_InstancedStaticMesh* StaticMeshFoliageType);
    
    UFUNCTION(BlueprintCallable)
    UFoliageInstancedStaticMeshComponent* AddFoliageStaticMeshComponent(const AInstancedFoliageActor* InstancedFoliageActor, const UFoliageType_InstancedStaticMesh* StaticMeshFoliageType);
    
};

