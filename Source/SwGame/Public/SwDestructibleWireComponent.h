#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "RsHitColliderEventDelegate.h"
#include "RsHitEvent.h"
#include "SwDestructibleWireComponent.generated.h"

class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwDestructibleWireComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHitColliderEvent DeferredOnRsHitCollided;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_HitCollider;
    
public:
    USwDestructibleWireComponent();
    UFUNCTION(BlueprintCallable)
    void StoreCurrentPhysicalStateToCache(const USkeletalMeshComponent* skelMeshComp);
    
    UFUNCTION(BlueprintCallable)
    void RestorePhysicalStateAndClearCache(const USkeletalMeshComponent* skelMeshComp);
    
    UFUNCTION(BlueprintCallable)
    void DeferExecutionForRsHitCollided(const FHitResult& Hit, const FRsHitEvent& HitEvent, const UPrimitiveComponent* HitCollider);
    
};

