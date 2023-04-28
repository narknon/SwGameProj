#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "SwMissileMovementOnFinishedHomingSignatureDelegate.h"
#include "SwMissileMovementComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwMissileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMissileMovementOnFinishedHomingSignature OnFinishedHoming;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackingLerpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Jerk;
    
public:
    USwMissileMovementComponent();
    UFUNCTION(BlueprintCallable)
    void StopHoming();
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float InSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSpeed(float InMaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetJerk(float InJerk);
    
    UFUNCTION(BlueprintCallable)
    void SetHomingTarget(AActor* HomingTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetAcceleration(float InAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndForcePull();
    
    UFUNCTION(BlueprintCallable)
    void NotifyBeginForcePull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteruptedByTK() const;
    
    UFUNCTION(BlueprintCallable)
    void InteruptByTK();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissileMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJerk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHomingTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcceleration() const;
    
};

