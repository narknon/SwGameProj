#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RsDamageParams.h"
#include "RsHitEvent.h"
#include "RsProjectile.h"
#include "ESwProjectileType.h"
#include "SwProjectileFX.h"
#include "Templates/SubclassOf.h"
#include "SwProjectile.generated.h"

class AActor;
class AController;
class ARsCharacter;
class UAkComponent;
class UNiagaraComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class URsDamageType;
class USceneComponent;
class UStaticMeshComponent;
class USwProjectileSpreadingData;

UCLASS(Abstract, Blueprintable)
class ASwProjectile : public ARsProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponentForRemaingSounds;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkComponent> AkComponentSpawnAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTravelDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwProjectileFX ProjectileFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ShootTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ProjectileOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USwProjectileSpreadingData* SpreadingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachToMuzzleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform OriginalMuzzleTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PreReflectionStartTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARsCharacter> ReflectionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESwProjectileType> ProjectileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCheap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseCheapMovement;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckDistanceToTarget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToTarget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckDistanceDoDamageToTarget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseRayCast;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayImpact;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseCheapFlyby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDamageOnlyOnce;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRsDamageParams LastDamageDoneInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ProjectileVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraProjectileVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ProjectileMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* MuzzleFlashEffect;
    
public:
    ASwProjectile();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector TrackingShotVector(AActor* HitTarget, FVector Offset, float NewSpeed) const;
    
    UFUNCTION(BlueprintCallable)
    void SetReflectionCollision(UPrimitiveComponent* InCollisionComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectileCollision(UPrimitiveComponent* InCollisionComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackTypeName(FName InTypeName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void QueueProjectileHitActor(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostProjectileCollisionEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReflectionCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnReflectionCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void K2_GetDamagedActors(TArray<AActor*>& DamagedActorsOut, TSubclassOf<AActor> ClassFilter) const;
    
    UFUNCTION(BlueprintCallable)
    void IgnoreCollisionWithMultipleActors(const TArray<AActor*>& IgnoredActors, const bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreCollisionWithActor(const AActor* IgnoredActor, const bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenReflected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenDeflected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProjectileCollisionRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInitialSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsHitEvent GetHitEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<URsDamageType> GetDamageTypeClass() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteReflectBehavior(ARsCharacter* ReflectionInstigator, AActor* OverrideTarget, float OverrideSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteDeflectBehavior(ARsCharacter* DeflectionInstigator, float OverrideSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool CheckHitActorReflection(ARsCharacter* OtherActor, UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector CalculateHitAlignmentVector(AActor* HitActor, UPrimitiveComponent* HitComponent, FVector ImpactLocation, float ProjectileDamage, AController* EventInstigator);
    
};

