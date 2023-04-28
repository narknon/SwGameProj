#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "RsHitEvent.h"
#include "SwTKProjectileBase.h"
#include "SwMissile.generated.h"

class AActor;
class ARsCharacter;
class URsDamageType;
class USwMissileMovementComponent;

UCLASS(Blueprintable)
class ASwMissile : public ASwTKProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSpawnUnarmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHitEvent HitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsDamageType* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoExplodeTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHomingMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissileArmDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissileNotificationRadius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwMissileMovementComponent* MissileMovement;
    
public:
    ASwMissile();
    UFUNCTION(BlueprintCallable)
    void TryToExplode(bool bCollidedWithActor, TEnumAsByte<EPhysicalSurface> SurfaceType, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void SetMissileAlive(bool bIsAlive);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackTypeNames(FName ImpactEffect, FName AttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayStopSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayStartSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayHitActorEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMissileHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMissileDeflected(const FVector& NewDirection, const TArray<ARsCharacter*>& CharactersInTrajectory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunched();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisarmed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAutoExplodeTimeUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmed();
    
    UFUNCTION(BlueprintCallable)
    void LaunchMissileInDirection(float InMissileArmDistance, bool bIsHoming, FVector InDirection);
    
    UFUNCTION(BlueprintCallable)
    void LaunchMissile(float InMissileArmDistance, bool bIsHoming);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissileAlive() const;
    
    UFUNCTION(BlueprintCallable)
    void DisarmMissile();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCollision();
    
    UFUNCTION(BlueprintCallable)
    void ArmMissile();
    
    UFUNCTION(BlueprintCallable)
    void ActivateCollision();
    
};

