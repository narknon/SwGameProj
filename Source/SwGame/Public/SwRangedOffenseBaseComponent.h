#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERsAIShotAccuracyOverrideMode.h"
#include "RsOffenseComponent.h"
#include "ESwProjectileTargetRule.h"
#include "SwProjectileAccuracyEntry.h"
#include "SwRangedOffenseBaseComponent_SpawnedProjectileDelegate.h"
#include "Templates/SubclassOf.h"
#include "SwRangedOffenseBaseComponent.generated.h"

class AActor;
class ARsCharacter;
class ASwProjectile;
class USceneComponent;
class USwProjectileAccuracyConfig;
class USwProjectileSpreadingData;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwRangedOffenseBaseComponent : public URsOffenseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CumulativeShotTimeInterval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwRangedOffenseBaseComponent_SpawnedProjectile OnSpawnAsyncProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OffScreenShotsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissingShotsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccurateShotsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwProjectileSpreadingData* AccurateSpreadingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwProjectileSpreadingData* MissedSpreadingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwProjectileSpreadingData* ExtendedMissedSpreadingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwProjectileAccuracyEntry DefaultAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwProjectileAccuracyConfig* AccuracyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseAsyncSpawning;
    
    USwRangedOffenseBaseComponent();
    UFUNCTION(BlueprintCallable)
    ASwProjectile* SpawnProjectileWithTransform(TSubclassOf<ASwProjectile> ProjectileClass, ARsCharacter* Shooter, const FTransform& MuzzleTransform, USceneComponent* MuzzleComponent, ERsAIShotAccuracyOverrideMode AccuracyOverrideMode, bool bNoTrackingShot);
    
    UFUNCTION(BlueprintCallable)
    ASwProjectile* SpawnProjectileAtTargetWithFallbackTransform(TSubclassOf<ASwProjectile> ProjectileClass, FVector from, AActor* ShootTarget, ESwProjectileTargetRule TargetingBone, bool bLineTraceTest, FTransform FallbackSpawnTransform, USceneComponent* MuzzleComponent, ERsAIShotAccuracyOverrideMode AccuracyOverrideMode);
    
    UFUNCTION(BlueprintCallable)
    ASwProjectile* SpawnProjectileAtTarget(TSubclassOf<ASwProjectile> ProjectileClass, FVector from, AActor* ShootTarget, ESwProjectileTargetRule TargetingBone, bool bLineTraceTest, USceneComponent* MuzzleComponent, ERsAIShotAccuracyOverrideMode AccuracyOverrideMode);
    
    UFUNCTION(BlueprintCallable)
    void SpawnProjectileAsync(TSubclassOf<ASwProjectile> ProjectileClass, ARsCharacter* Shooter, USceneComponent* MuzzleComponent, ERsAIShotAccuracyOverrideMode AccuracyOverrideMode);
    
    UFUNCTION(BlueprintCallable)
    ASwProjectile* SpawnProjectile(TSubclassOf<ASwProjectile> ProjectileClass, ARsCharacter* Shooter, USceneComponent* MuzzleComponent, ERsAIShotAccuracyOverrideMode AccuracyOverrideMode, bool bNoTrackingShot);
    
    UFUNCTION(BlueprintCallable)
    void RestartShotAccuracyCycle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectionsTracesReturned(const TMap<float, FVector>& WorldLocations);
    
    UFUNCTION(BlueprintCallable)
    bool IsFriendlyBlockingLOS(USceneComponent* MuzzleComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleAudioReflections(const FVector& AudioSourceLocation, const FVector& AudioSourceForwardVector, const float TraceDistance, const float InMinimumReflectionDistance, float InDelayMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAccuracyCycleStateDebugString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAttackTargetWithinShootingCone(float AngleInDegree, bool bIgnoreTargetElevation, USceneComponent* OverrideAimTransform) const;
    
};

