#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FlockConfigData.h"
#include "SwFlockingMovementComponent.generated.h"

class AActor;
class UStaticMeshComponent;
class USwFlockingMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwFlockingMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentVelocity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USwFlockingMovementComponent*> otherFlockMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlockConfigData flockConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MemberPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawForces;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
public:
    USwFlockingMovementComponent();
private:
    UFUNCTION(BlueprintCallable)
    void StopFlockingMovement(bool ClearPhysicsForces);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFlockingMovementEnabled(const bool Enabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitFlockingMovement(const FFlockConfigData& NewFlockConfig, TArray<USwFlockingMovementComponent*> NewOtherFlockMembers, UStaticMeshComponent* PrimitiveComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    FVector GetMemberVelocity();
    
    UFUNCTION(BlueprintCallable)
    void GetMemberLocation(FVector& Output);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFlockingMovementEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawDebugFlockForcesEvent(FVector AlignmentForce, FVector CohesionForce, FVector SeparationForce);
    
private:
    UFUNCTION(BlueprintCallable)
    void ClearCurrentPhysicsForces();
    
    UFUNCTION(BlueprintCallable)
    void BeginFlockingTowardsPosition(const FVector& NewTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void BeginFlockingTowardsActor(AActor* NewTargetActor);
    
};

