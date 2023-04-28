#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "RsDamageInfo.h"
#include "RsDamageParams.h"
#include "RsLimbBeganOverlapEventDelegate.h"
#include "RsLimbDestroyedEventDelegate.h"
#include "RsLimbDismembermentData.h"
#include "RsLimbInfo.h"
#include "RsTakeAnyLimbDamageEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "RsLimbsComponent.generated.h"

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
class URsLimb;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsLimbsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsLimbBeganOverlapEvent OnLimbOverlapped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsLimbDestroyedEvent OnLimbDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsTakeAnyLimbDamageEvent OnAnyLimbDamage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsLimb*> Limbs;
    
public:
    URsLimbsComponent();
    UFUNCTION(BlueprintCallable)
    void SpawnDismemberedLimb(const FGameplayTag LimbTag);
    
    UFUNCTION(BlueprintCallable)
    void SetLimbVisibility(const FGameplayTag LimbTag, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetLimbDismembermentData(const FGameplayTag LimbTag, const FRsLimbDismembermentData& DismembermentData);
    
    UFUNCTION(BlueprintCallable)
    void SetLimbCollision(const FGameplayTag LimbTag, TEnumAsByte<ECollisionEnabled::Type> CollisionType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLimb(const FRsLimbInfo& LimbInfo);
    
    UFUNCTION(BlueprintCallable)
    float ReduceLimbHealth(const FGameplayTag LimbTag, const FRsDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    float KillLimb(const FGameplayTag LimbTag, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser, AController* DamageInstigator, const FRsDamageParams& DamageParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbAlive(const FGameplayTag LimbTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetRegisteredLimbTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLimbHealth(const FGameplayTag LimbTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetLastDamageInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsDamageInfo GetLastDamageInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLastDamageCauser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag FindLimbWithCollider(const UPrimitiveComponent* Collider) const;
    
};

