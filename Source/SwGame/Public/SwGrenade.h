#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RsHitEvent.h"
#include "ESwGrenadeDamageFilterType.h"
#include "SwTKProjectileBase.h"
#include "Templates/SubclassOf.h"
#include "SwGrenade.generated.h"

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
class URsDamageType;

UCLASS(Abstract, Blueprintable)
class ASwGrenade : public ASwTKProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlastRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHitEvent HitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsDamageType* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSpawnActorOnExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnActorOnExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoExplodeTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExplodesOnCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysExplodesOnCollisionWithHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwGrenadeDamageFilterType DamageFilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayOnDetonatedByExplosion;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> CollisionShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Countdown;
    
public:
    ASwGrenade();
    UFUNCTION(BlueprintCallable)
    void TryToExplode();
    
    UFUNCTION(BlueprintCallable)
    void SetAttackTypeNames(FName ImpactEffect, FName AttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayExplodeEffect();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGrenadeTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* InDamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnGrenadeHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisarmed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownTimeUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownTicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownBegan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAutoExplodeTimeUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmed();
    
    UFUNCTION(BlueprintCallable)
    void NotifyOnTouchActor(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetonationTime() const;
    
    UFUNCTION(BlueprintCallable)
    void DropGrenade(bool bArmGrenade, float ArmDelay);
    
    UFUNCTION(BlueprintCallable)
    void DisarmGrenade();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCollision();
    
    UFUNCTION(BlueprintCallable)
    void ArmGrenade(float Delay);
    
    UFUNCTION(BlueprintCallable)
    void AddTimeToDetonation(float TimeDelay);
    
    UFUNCTION(BlueprintCallable)
    void AddCollisionShape(UPrimitiveComponent* CollisionComponent);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCollision();
    
};

